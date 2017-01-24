/*************************************************************************
	> File Name: swap1.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2016年12月10日 星期六 23时58分28秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int i;
    int j;
    int temp;

    i = 5;
    j = 10;
    cout<<"i="<<i<<endl<<"j="<<j<<endl;

    //交换
    temp = i;
    i = j;
    j = temp;

    cout<<"i="<<i<<endl<<"j="<<j<<endl;

    return 0;
}

