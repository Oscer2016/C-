/*************************************************************************
	> File Name: example9_19.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月18日 星期三 12时21分24秒
 ************************************************************************/

#include <iostream>
#include <list>

using namespace std;

int main(int argc, char *argv[])
{
    list<string> sl;        // string的list
    
    string word;
    while (cin >> word) {
        // 读取字符串，直到遇到文件结束符
        sl.push_back(word);
    }

    // 用cbegin()获取list首元素迭代器，遍历list中所有元素
    for (auto si = sl.cbegin(); si != sl.cend(); si++) {
        cout << *si << endl;
    }

    return 0;
}

