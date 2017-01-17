/*************************************************************************
	> File Name: example9_14.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月17日 星期二 18时04分58秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char *argv[])
{
    list<char *> slist = {"hello", "world", "!"};
    vector<string> svec;

    // 容器类型不同，不能直接赋值
    // svec = slist;
    // 元素类型相容，可以采用范围赋值
    svec.assign(slist.begin(), slist.end());

    cout << svec.capacity() << " " << svec.size() << " " 
         << svec[0] << " " << svec[svec.size() - 1] << endl;

    return 0;
}

