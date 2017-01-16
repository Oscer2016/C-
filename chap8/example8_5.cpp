/*************************************************************************
	> File Name: example8_5.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月14日 星期六 22时51分49秒
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream in("data");        // 打开文件
    if (!in) {
        cout << "无法打开输入文件" << endl;
        return -1;
    }
    string line;
    vector<string> words;
    while (in >> line) {
        // 从文件中读取一个单词
        words.push_back(line);  // 添加到vector中
    }
    in.close();                 // 输入完毕，关闭文件

    vector<string>::const_iterator it = words.begin();      // 迭代器
    while (it != words.end()) {
        // 遍历vector
        cout << *it << endl;        // 输出vector中的元素
        ++it;
    }
    return 0;
}

