/*************************************************************************
	> File Name: example7_43.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月13日 星期五 17时30分29秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

// 该类型没有显式定义默认构造函数，编译器也不会为它合成一个
class NoDefault {
public:
    NoDefault(int i) {
        val = i;
    }
    int val;
};

class C {
public:
    NoDefault nd;
    // 必须显式调用NoDefault的带参构造函数初始化nd
    C(int i = 0) : nd(i) {  }
};

int main(int argc, char *argv[])
{
    C c;            // 使用了类型C的默认构造函数
    cout << c.nd.val << endl;
    return 0;
}

