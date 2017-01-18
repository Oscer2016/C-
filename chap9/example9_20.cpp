/*************************************************************************
	> File Name: example9_20.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月18日 星期三 12时27分49秒
 ************************************************************************/

#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main(int argc, char *argv[])
{
    list<int> ilist = {1, 2, 3, 4, 5, 6, 7, 8};     // 初始化整数list
    deque<int> odd_d, even_d;

    // 遍历整数list
    for (auto iter = ilist.cbegin(); iter != ilist.cend(); iter++) {
        if (*iter & 1) {
            // 查看最低位，1：奇数，0：偶数
            odd_d.push_back(*iter);
        } else {
            even_d.push_back(*iter);
        }
    }

    cout << "奇数值有：";
    for (auto iter = odd_d.cbegin(); iter != odd_d.cend(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    cout << "偶数值有：";
    for (auto iter = even_d.cbegin(); iter != even_d.cend(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}

