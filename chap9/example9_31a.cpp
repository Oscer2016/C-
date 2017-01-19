/*************************************************************************
	> File Name: example9_31a.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月19日 星期四 20时22分02秒
 ************************************************************************/

#include <iostream>
#include <list>

using namespace std;

int main(int argc, char *argv[])
{
    list<int> ilst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto curr = ilst.begin();       // 首节点

    while (curr != ilst.end()) {
        if (*curr & 1) {
            // 奇数
            curr = ilst.insert(curr, *curr);    // 插入到当前元素之前
            curr++;
            curr++;         // 移动到下一元素
        } else {
            // 偶数
            curr = ilst.erase(curr);            // 删除，指向下一元素
        }
    }

    for (curr = ilst.begin(); curr != ilst.end(); curr++) {
        cout << *curr << " ";
    }
    cout << endl;

    return 0;
}

