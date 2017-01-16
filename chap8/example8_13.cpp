/*************************************************************************
	> File Name: example8_13.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月15日 星期日 22时31分13秒
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

string format(const string &s) {
    return s;
}

bool valid(const string &s) {
    return true;
}

int main(int argc, char *argv[])
{
    string line, word;          // 分别保存来自输入的一行和单词
    vector<PersonInfo> people;  // 分别保存来自输入的所有记录
    istringstream record;

    if (argc != 2) {
        cerr << "请给出文件名" << endl;
        return -1;
    }
    ifstream in(argv[1]);
    if (!in) {
        cerr << "无法打开输入文件" << endl;
        return -1;
    }

    while (getline(in, line)) {
        PersonInfo info;        // 创建一个保存此记录
        record.clear();         // 重复使用字符串流时，每次都要调用clear
        record.str(line);       // 将记录绑定到刚读入的行
        record >> info.name;    // 读取名字
        while (record >> word) {            // 读取电话号码
            info.phones.push_back(word);    // 保存它们
        } 
        people.push_back(info);             // 将此记录追加到people末尾
    }

    ostringstream os;
    for (const auto &entry : people) {              // 对people中每一项
        ostringstream formatted, badNums;           // 每个循环步创建的对象
        for (const auto &nums : entry.phones) {     // 对每个数
            if (!valid(nums)) {
                badNums << " " << nums;             // 将数的字符串形式存入badNums
            } else {
                // 将格式化的字符串“写入”formatted
                formatted << " " << format(nums);
            }
        }
        if (badNums.str().empty()) {            // 没有错误的数
            // 打印名字和格式化的数
            os << entry.name << " " << formatted.str() << endl;
        } else {
            // 打印名字和错误的数
            cerr << "input error: " << entry.name 
            << " invalid number(s) " << badNums.str() << endl;
        }
    }
    cout << os.str() << endl;

    return 0;
}

