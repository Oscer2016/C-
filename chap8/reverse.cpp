/*************************************************************************
	> File Name: reverse.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月16日 星期一 17时51分27秒
 ************************************************************************/

#include <iostream>
using namespace std;
int main( )
{
   char *a="BASIC";//字符指针指向'B'
   for(int i=4;i>=0;i--)
      cout.put(*(a+i));                  //从最后一个字符开始输出
   cout.put('\n');
   return 0;
}

