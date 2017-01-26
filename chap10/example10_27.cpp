/*************************************************************************
	> File Name: example10_27.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月26日 星期四 10时48分47秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> vi = {1, 2, 2, 3, 4, 5, 5, 6};
    list<int> li;

    unique_copy(vi.begin(), vi.end(), back_inserter(li));
    // unique_copy(vi.begin(), vi.end(), inserter(li, li.begin()));
    for (auto v : li) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}

