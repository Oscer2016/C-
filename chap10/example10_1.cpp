/*************************************************************************
	> File Name: example10_1.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月24日 星期二 18时00分35秒
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream in(argv[1]);
    if (!in) {
        cout << "打开文件失败" << endl;
        exit(1);
    }

    vector<int> vi;
    int val;
    while (in >> val) {
        vi.push_back(val);
    }

    cout << "请输入要搜索的整数: " << endl;
    cin >> val;

    cout << "序列中包含" << count(vi.begin(), vi.end(), val) << "个" << val << endl;

    return 0;
}

