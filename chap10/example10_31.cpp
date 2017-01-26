/*************************************************************************
	> File Name: example10_31.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月26日 星期四 12时43分04秒
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    // 创建流迭代器从标准输入读入整数
    istream_iterator<int> in_iter(cin);

    // 尾后迭代器
    istream_iterator<int> eof;
    vector<int> vi;
    while (in_iter != eof) {
        vi.push_back(*in_iter++);       // 存入vector并递增迭代器
    }

    sort(vi.begin(), vi.end());

    ostream_iterator<int> out_iter(cout, " ");
    unique_copy(vi.begin(), vi.end(), out_iter);

    return 0;
}

