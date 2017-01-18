/*************************************************************************
	> File Name: example9_24.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月18日 星期三 21时04分15秒
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    //vector<int> iv;   // vector为空，抛出out_of_range异常，程序终止
    vector<int> iv = {1, 2};

    cout << iv.at(0) << endl;
    cout << iv[0] << endl;
    cout << iv.front() << endl;
    cout << *(iv.begin()) << endl;

    return 0;
}

