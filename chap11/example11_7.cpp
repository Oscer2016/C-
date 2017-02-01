/*************************************************************************
	> File Name: example11_7.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月29日 星期日 19时43分37秒
 ************************************************************************/

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void add_family(map<string, vector<string>> &families, const string &family)
{
    if (families.find(family) == families.end()) {
        families[family] = vector<string>();
    }
}

void add_child(map<string, vector<string>> &families, const string &family, 
              const string &child)
{
    families[family].push_back(child);
}

int main(int argc, char *argv[])
{
    map<string, vector<string>> families;

    add_family(families, "张");
    add_child(families, "张", "强");
    add_child(families, "张", "刚");
    add_child(families, "王", "五");
    add_family(families, "王");

    for (auto f : families) {
        cout << f.first << "家的孩子: ";
        for (auto c : f.second) {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}

