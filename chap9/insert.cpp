/*************************************************************************
	> File Name: insert.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月18日 星期三 20时29分37秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char *argv[])
{
    vector<string> svec;
    list<string> slist;
    vector<string> v = {"quasi", "simba", "frollo", "scar"};

    // 等价于调用slist.push_front("Hello!");
    slist.insert(slist.begin(), "Hello!");

    // vector不支持push_front,我们 可以插入到begin()之前
    // 警告：插入到vector末尾之外的任何位置都可能很慢
    svec.insert(svec.begin(), "Hello!");
    svec.insert(svec.end(), 10, "Anna");

    // 将v的最后两个元素添加到slist开始的位置
    slist.insert(slist.begin(), v.end() - 2, v.end());
    slist.insert(slist.end(), {"these", "words", "will", "go", "at", "the", "end"});

    // 运行时错误：迭代器表示要拷贝的范围，不能指向与目的位置相同的容器
    slist.insert(slist.begin(), slist.begin(), slist.end());

    for (auto iter = svec.begin(); iter != svec.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    for (auto iter = slist.begin(); iter != slist.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    for (auto iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}

