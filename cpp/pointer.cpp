#include <iostream>

int main(int argc, char *argv[]) 
{
   int n = 10;
   void * p_num = &n;
   int * p_num2 = (int *)p_num;
   std::cout << "n" << n << std::endl;
   //std::cout << *p_num << std::endl;
   std::cout << *p_num2 << std::endl;
}
