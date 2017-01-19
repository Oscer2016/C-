/*************************************************************************
	> File Name: example9_41.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月19日 星期四 22时27分37秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    vector<char> vc = {'H', 'e', 'l', 'l', 'o'};
    string s(vc.data(), vc.size());
    cout << s << endl;

    return 0;
}

