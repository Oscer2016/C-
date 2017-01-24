/*************************************************************************
	> File Name: mod.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2016年12月11日 星期日 16时19分53秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int apple_num = 60;
    int people = 7;
    int apple_remain;

    if (people == 0) {
        cout<<"错误"<<endl;
    } else {
        apple_remain = apple_num % people;
        cout<<"平均分配后还剩: "<<apple_remain<<" 个苹果"<<endl;
    }

    return 0;
}

