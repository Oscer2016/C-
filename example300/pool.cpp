/*************************************************************************
	> File Name: pool.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2016年12月11日 星期日 00时17分14秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int Pool_volume;
    int count = 10;
    
    while (count != 0) {
        cin>>Pool_volume;
        if (Pool_volume < 100) {
            cout<<"游泳池中水没溢出，可以继续加水"<<endl;
        } else {
            cout<<"游泳池中水已满，必须停止加水或者加入另一个游泳池"<<endl;
        }
        count--;
    }

    return 0;
}

