/*************************************************************************
	> File Name: example9_18.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月18日 星期三 12时11分40秒
 ************************************************************************/

#include <iostream>
#include <deque>

using namespace std;

int main(int argc, char *argv[])
{
    deque<string> sd;       // string的deque

    string word;
    while (cin >> word) {
        // 读取字符串，直到遇到文件结束符
        sd.push_back(word);
    }

    // 用cbegin()获取元素迭代器，遍历deque中所有元素
    for (auto si = sd.cbegin(); si != sd.cend(); si++) {
        cout << *si << endl;
    }

    return 0;
}

