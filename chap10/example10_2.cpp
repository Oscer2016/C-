/*************************************************************************
	> File Name: example10_2.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月24日 星期二 18时08分07秒
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream in(argv[1]);
    if (!in) {
        cout << "打开文件失败!" << endl;
        exit(1);
    }

    list<string> ls;
    string word;
    while (in >> word) {
        ls.push_back(word);
    }

    cout << "请输入要搜索的字符串: ";
    cin >> word;
    cout << "序列中包含" << count(ls.begin(), ls.end(), word) << "个" << word << endl;
  
    return 0;
}

