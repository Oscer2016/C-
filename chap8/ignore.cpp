/*************************************************************************
	> File Name: ignore.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月16日 星期一 18时29分41秒
 ************************************************************************/

#include <iostream>
using namespace std;
int main( )
{
   char ch[20];
   cin.get(ch,20,'/');
   cout<<"The first part is:"<<ch<<endl;
   cin.ignore(1,'/');        //跳过输入流中一个字符
   cin.get(ch,20,'/');
   cout<<"The second part is:"<<ch<<endl;
   return 0;
}

