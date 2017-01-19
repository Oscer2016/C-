/*************************************************************************
	> File Name: example9_32a.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月19日 星期四 20时44分55秒
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    string tmp;
    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert(iter, *iter);
        }
        for (auto begin = vi.begin(); begin != vi.end(); begin++) {
            cout << *begin << " ";
        }
        cout << endl;
        cin >> tmp;
    }
    ++iter;

    return 0;
}

