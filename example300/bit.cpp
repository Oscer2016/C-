/*************************************************************************
	> File Name: bit.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2016年12月11日 星期日 16时08分17秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int a = 10;
    int b = 2;
    int c;
    
    c = a & b;
    cout<<"a & b = "<<c<<endl;

    c = a | b;
    cout<<"a | b = "<<c<<endl;

    c = a ^ b;
    cout<<"a ^ b = "<<c<<endl;

    c = ~a;
    cout<<"~a = "<<c<<endl;
    
    c = a << 1;
    cout<<"a << 1 = "<<c<<endl;
    
    c = a >> 1;
    cout<<"a >> 1 = "<<c<<endl;
    
    return 0;
}

