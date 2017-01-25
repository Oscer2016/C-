/*************************************************************************
	> File Name: example10_15.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月25日 星期三 11时21分27秒
 ************************************************************************/

#include <iostream>

using namespace std;

void add(int a) 
{
    auto sum = [a] (int b) { return a + b; };

    cout << sum(1) << endl;
}

int main(int argc, char *argv[])
{
    add(1);
    add(2);

    return 0;
}

