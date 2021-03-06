/*************************************************************************
	> File Name: example11_8b.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: Sun 05 Feb 2017 01:54:06 PM CST
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

string &trans(string &s) 
{
    for (int p = 0; p < s.size(); p++) {
        if (s[p] >= 'A' && s[p] <= 'Z') {
            s[p] -= ('A' - 'a');
        } else if (s[p] == ',' || s[p] == '.') {
            s.erase(p, 1);
        }
    }
    return s;
}

int main(int argc, char *argv[])
{
    ifstream in(argv[1]);
    if (!in) {
        cout << "打开输入文件失败! " << endl;
        exit(1);
    }

    set<string> unique_word;            // 不重复的单词
    string word;
    while (in >> word) {
        trans(word);
        unique_word.insert(word);       // 添加不重复单词
    }

    for (const auto &w : unique_word) {
        // 打印不重复单词
        cout << w << " ";
    }
    cout << endl;

    return 0;
}

