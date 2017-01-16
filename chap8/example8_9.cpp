/*************************************************************************
	> File Name: example8_9.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月15日 星期日 19时51分56秒
 ************************************************************************/

#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>

using namespace std;

istream &f(istream &in)
{
    string v;
    while (in >> v, !in.eof()) {
        // 直到遇到文件结束符才停止读取
        if (in.bad()) {
            throw runtime_error("IO错误");
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
    ostringstream msg;
    msg << "C++ Primer 第五版" << endl;
    istringstream in(msg.str());
    f(in);
    return 0;
}

