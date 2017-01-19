/*************************************************************************
	> File Name: example9_38.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月19日 星期四 21时17分29秒
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> vi;
    int s, c;
    for (s = vi.size(), c = vi.capacity(); s <= c; s++) {
        vi.push_back(1);
    }
    cout << "空间: " << vi.capacity() << " 元素数: " << vi.size() << endl;

    for (s = vi.size(), c = vi.capacity(); s <= c; s++) {
        vi.push_back(1);
    }
    cout << "空间: " << vi.capacity() << " 元素数: " << vi.size() << endl;

    for (s = vi.size(), c = vi.capacity(); s <= c; s++) {
        vi.push_back(1);
    }
    cout << "空间: " << vi.capacity() << " 元素数: " << vi.size() << endl;

    for (s = vi.size(), c = vi.capacity(); s <= c; s++) {
        vi.push_back(1);
    }
    cout << "空间: " << vi.capacity() << " 元素数: " << vi.size() << endl;

    for (s = vi.size(), c = vi.capacity(); s <= c; s++) {
        vi.push_back(1);
    }
    cout << "空间: " << vi.capacity() << " 元素数: " << vi.size() << endl;
    
    for (auto iter = vi.begin(); iter != vi.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}

