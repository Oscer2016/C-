/*************************************************************************
	> File Name: example8_1.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月14日 星期六 22时21分15秒
 ************************************************************************/

#include <iostream>
#include <stdexcept>
using namespace std;

istream &f(istream &in) 
{
    int v;
    while (in >> v, !in.eof()) {
        // 直到遇到文件结束符才停止读取
        if (in.bad()) {
            throw runtime_error("IO流错误");
        }
        if (in.fail()) {
            cerr << "数据错误，请重试: " << endl;
            in.clear();
            in.ignore(100, '\n');
            continue;
        }
        cout << v << endl;
    }
    in.clear();
    return in;
}

int main(int argc, char *argv[])
{
    cout << "请输入一些整数，按Ctrl+C结束" << endl;
    f(cin);
    return 0;
}

