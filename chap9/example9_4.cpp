/*************************************************************************
	> File Name: example9_4.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月17日 星期二 16时52分59秒
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

bool search_vec(vector<int>::iterator beg,
                vector<int>::iterator end, int val) {
    for (; beg != end; beg++) {         // 遍历范围
        if (*beg == val) {              // 检查是否与给定值相等
            return true;
        }
    }
    return false;
}

int main(int argc, char *argv[])
{
    vector<int> ilist = {1, 2, 3, 4, 5, 6, 7};

    cout << search_vec(ilist.begin(), ilist.end(), 3) << endl;
    cout << search_vec(ilist.begin(), ilist.end(), 8) << endl;
    
    return 0;
}

