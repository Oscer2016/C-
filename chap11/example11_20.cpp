/*************************************************************************
	> File Name: example11_20.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: Sun 05 Feb 2017 04:00:07 PM CST
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream in(argv[1]);
    if (!in) {
        cout << "打开输入文件失败!" << endl;
        exit(1);
    }

    map<string, size_t> word_count;         // string到count的映射
    string word;
    while (in >> word) {
        auto ret = word_count.insert({word, 1});    // 插入单词,次数为1
        if (!ret.second) {
            ++ret.first->second;            // 已有单词的出现次数加1
        }
    }

    for (const auto &w : word_count) {
        // 对map中的每个元素打印结果
        cout << w.first << "出现了 " << w.second << " 次" << endl;
    }
    
    return 0;
}

