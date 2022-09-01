#!/bin/bash
#
# 按日期自动分割nginx服务器的access.log, 每天00:00:00执行
# 2018/09/07
# Hulifa

set -u
set -o pipefail

LOGS_PATH=/usr/local/nginx/logs
NGINX_PID_FILE=/usr/local/nginx/logs/nginx.pid
YESTERDAY=$(date -d 'yesterday' +%Y%m%d)

# 移动localhost日志
mv ${LOGS_PATH}/error.log ${LOGS_PATH}/error/error_${YESTERDAY}.log
mv ${LOGS_PATH}/access.log ${LOGS_PATH}/access/access_${YESTERDAY}.log

# 移动虚拟主机的访问日志
ls ${LOGS_PATH}/logs.d/access/*.log | while read LOG_FILE
do
	LOG_FILE_NAME=$(basename ${LOG_FILE})
	LOG_FILE_NAME_WITHOUT_SUFFIX=${LOG_FILE_NAME%.*}
	# create dir
	CUR_LOG_DIR=${LOGS_PATH}/logs.d/access/${LOG_FILE_NAME_WITHOUT_SUFFIX}
	mkdir -p ${CUR_LOG_DIR}
	# mv log file
	mv ${LOGS_PATH}/logs.d/access/${LOG_FILE_NAME} ${CUR_LOG_DIR}/${LOG_FILE_NAME_WITHOUT_SUFFIX}_${YESTERDAY}.log
done 

# 移动虚拟主机的错误日志
ls ${LOGS_PATH}/logs.d/error/*.log | while read LOG_FILE
do
	LOG_FILE_NAME=$(basename ${LOG_FILE})
	LOG_FILE_NAME_WITHOUT_SUFFIX=${LOG_FILE_NAME%.*}
	# create dir
	CUR_LOG_DIR=${LOGS_PATH}/logs.d/error/${LOG_FILE_NAME_WITHOUT_SUFFIX}
	mkdir -p ${CUR_LOG_DIR}
	# mv log file
	mv ${LOGS_PATH}/logs.d/error/${LOG_FILE_NAME} ${CUR_LOG_DIR}/${LOG_FILE_NAME_WITHOUT_SUFFIX}_${YESTERDAY}.log
done 

# 向nginx master process发送重新打开日志文件的信号
kill -USR1 $(cat ${NGINX_PID_FILE})

