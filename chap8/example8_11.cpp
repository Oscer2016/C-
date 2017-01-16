/*************************************************************************
	> File Name: example8_11.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月15日 星期日 22时31分13秒
 ************************************************************************/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main(int argc, char *argv[])
{
    string line, word;          // 分别保存来自输入的一行和单词
    vector<PersonInfo> people;  // 分别保存来自输入的所有记录
    istringstream record;

    while (getline(cin, line)) {
        PersonInfo info;        // 创建一个保存此记录
        record.clear();         // 重复使用字符串流时，每次都要调用clear
        record.str(line);       // 将记录绑定到刚读入的行
        record >> info.name;    // 读取名字
        while (record >> word) {            // 读取电话号码
            info.phones.push_back(word);    // 保存它们
        } 
        people.push_back(info);             // 将此记录追加到people末尾
    }

    return 0;
}

