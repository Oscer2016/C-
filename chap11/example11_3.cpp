/*************************************************************************
	> File Name: example11_3.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月29日 星期日 08时47分31秒
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
        cout << "打开输入文件失败! " << endl;
        exit(1);
    }

    map<string, size_t> word_count;         // string到count的映射
    string word;
    while (in >> word) {
        ++word_count[word];                 // 这个单词的出现次数加1
    }

    for (const auto &w : word_count) {
        // 打印map中的每个元素
        cout << w.first << "出现了" << w.second << "次" << endl;
    }

    return 0;
}

