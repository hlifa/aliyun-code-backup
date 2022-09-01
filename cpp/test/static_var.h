/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file static_var.h
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/07/09 16:15:18
 * @version $Revision$ 
 * @brief 
 *  
 **/
#ifndef STATIC_VAR_H
#define STATIC_VAR_H

// non-local static varibale
static int AGE = 10;

class P1 {
public:
    static char sName[100]; 
};
char P1::sName[100] = "hulifa";

struct S1 {
    static int sWei;
} so1;
int S1::sWei = 90;

#endif  // STATIC_VAR_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
