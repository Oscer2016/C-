/*************************************************************************
	> File Name: example9_13.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月17日 星期二 17时34分49秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char *argv[])
{
    list<int> ilist = {1, 2, 3, 4, 5, 6, 7};
    vector<int> ivec = {7, 6, 5, 4, 3, 2, 1};
    //cout << ilist[0] << endl;     // error, 链表不能通过下标索引

    // 容器类型不同，不能使用拷贝初始化
    // vector<double> ivec(ilist);
    // 元素类型相容，因此可采用范围初始化
    vector<double> dvec(ilist.begin(), ilist.end());

    // 容器类型不同，不能使用拷贝初始化
    // vector<double> dvec1(ivec);
    // 元素类型相容，因此可采用范围初始化
    vector<double> dvec1(ivec.begin(), ivec.end());

    cout << dvec.capacity() << " " << dvec.size() << " "
         << dvec[0] << " " << dvec[dvec.size() - 1] << endl;
    cout << dvec1.capacity() << " " << dvec1.size() << " "
         << dvec1[0] << " " << dvec1[dvec1.size() - 1] << endl;

    return 0;
}

