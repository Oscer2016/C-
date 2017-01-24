/*************************************************************************
	> File Name: example10_3.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月24日 星期二 18时14分22秒
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream in(argv[1]);
    if (!in) {
        cout << "打开输入文件失败!" << endl;
        exit(1);
    }

    vector<int> vi;
    int val;
    while (in >> val) {
        vi.push_back(val);
    }

    cout << "序列中整数之和为" << accumulate(vi.begin(), vi.end(), 0) << endl;

    return 0;
}

