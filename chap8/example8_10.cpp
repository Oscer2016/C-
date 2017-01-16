/*************************************************************************
	> File Name: example8_10.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月15日 星期日 19时55分21秒
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream in("data");
    if (!in) {
        cerr << "无法打开输入文件" << endl;
        return -1;
    }

    string line;
    vector<string> words;
    while (getline(in, line)) {
        // 从文件中读取一行
        words.push_back(line);  // 添加到vector中
    }
    in.close();

    vector<string>::const_iterator it = words.begin();      // 迭代器
    while (it != words.end()) {
        istringstream line_str(*it);
        string word;
        while (line_str >> word)  {     // 通过istringstream从vector中读取数据
            cout << word << " ";
        }
        cout << endl;
        ++it;
    }

    return 0;
}

