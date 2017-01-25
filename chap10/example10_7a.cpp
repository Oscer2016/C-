/*************************************************************************
	> File Name: example10_7a.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月25日 星期三 09时03分17秒
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream in(argv[1]);
    if (!in) {
        cout << "打开输入文件失败" << endl;
        exit(1);
    }

    list<int> lst;
    vector<int> vec;
    int val;
    while (in >> val) {
        lst.push_back(val);
    }

    copy(lst.begin(), lst.end(), back_inserter(vec));

    cout << equal(lst.begin(), lst.end(), vec.begin()) << endl;
    for (auto iter = vec.begin(); iter != vec.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    
    return 0;
}

