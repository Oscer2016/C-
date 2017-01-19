/*************************************************************************
	> File Name: example9_42.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月19日 星期四 22时31分48秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void input_string(string &s)
{
    s.reverse(100);
    char c;
    while (cin >> c) {
        s.push_back(c);
    }
}
int main(int argc, char *argv[])
{
    string s;
    input_string(s);
    cout << s << endl;

    return 0;
}

