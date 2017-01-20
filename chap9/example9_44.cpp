/*************************************************************************
	> File Name: example9_44.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月20日 星期五 10时21分46秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void replace_string(string &s, const string &oldVal, const string &newVal) 
{
    int p = 0;
    while ((p = s.find(oldVal, p)) != string::npos) {
        // 在s中查找oldVal
        s.replace(p, oldVal.size(), newVal);    // 将找到的子串替换为newVal的内容
        p += newVal.size();                     // 下标调整到新插入内容之后
    }
}

int main(int argc, char *argv[])
{
    string s = "tho thru tho!";
    replace_string(s, "thru", "through");
    cout << s << endl;

    replace_string(s, "tho", "though");
    cout << s << endl;

    replace_string(s, "through", "");
    cout << s << endl;
    
    return 0;
}

