/*************************************************************************
	> File Name: example9_47a.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月20日 星期五 20时36分40秒
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void find_char(string &s, const string &chars)
{
    cout << "在" << s << "中查找" << chars << "中字符" << endl;
    string::size_type pos = 0;
    while ((pos = s.find_first_of(chars, pos)) != string::npos) {
        // 找到字符
        cout << "pos: " << pos << ", char: " << s[pos] << endl;
        pos++;          // 移动到下一字符
    }
}

int main(int argc, char *argv[])
{
    string s = "ab2c3d7R4E6";
    cout << "查找所有数字" << endl;
    find_char(s, "0123456789");

    cout << "查找所有字母" << endl;
    find_char(s, "abcdefghijklmnopqrstuvwxyz"\
             "ABCDEFGHIJKLMNOPQRSTUVWXYZ");

    return 0;
}

