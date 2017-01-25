/*************************************************************************
	> File Name: example10_14.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月25日 星期三 11时06分52秒
 ************************************************************************/

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    auto sum = [] (int a, int b) { return a + b; };

    cout << sum(1, 1) << endl;

    return 0;
}

