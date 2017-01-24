/*************************************************************************
	> File Name: example10_6.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月24日 星期二 20时30分10秒
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream  in(argv[1]);
    if (!in) {
        cout << "打开输入文件失败!" << endl;
        exit(1);
    }

    vector<int> vi;
    int val;
    while (in >> val) {
        vi.push_back(val);
        cout << val << " ";
    }
    cout << endl;

    fill_n(vi.begin(), vi.size(), 0);
    for (auto iter = vi.begin(); iter != vi.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    
    return 0;
}

