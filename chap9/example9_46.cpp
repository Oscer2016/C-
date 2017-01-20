/*************************************************************************
	> File Name: example9_46.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月20日 星期五 17时00分57秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void name_string(string &name, const string &prefix, const string &suffix)
{
    name.insert(0, " ");
    name.insert(0, prefix);    // 插入前缀
    name.insert(name.size(), " ");
    name.insert(name.size(), suffix);          // 插入后缀
}

int main(int argc, char *argv[])
{
    string s = "James Bond";
    name_string(s, "Mr.", "II");
    cout << s << endl;

    s = "M";
    name_string(s, "Mrs.", "III");
    cout << s << endl;

    return 0;
}

