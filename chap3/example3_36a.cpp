#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    const int sz = 5;   // 常量sz作为数组的维度
    int a[sz], b[sz], i;
    srand((unsigned)time(NULL)); 
    for (i = 0; i < sz; i++) {
        // 每次循环生成一个10以内的随机数并添加到a中
        a[i] = rand() % 10;
    }
    cout << "系统数据已经生成，请输入您猜测的5个数字（0～9），可以重复: " << endl;
    int uVal;
    // 通过for循环为数组元素赋值
    for (i = 0; i < sz; i++) {
        if (cin >> uVal) {
            b[i] = uVal;
        }
    }
    cout << "您猜测的数据是: " << endl;
    for (auto val : a) {
        cout << val << " ";
    }
    cout << endl;
    int *p = begin(a), *q = begin(b);
    while (p != end(a) && q != end(b)) {
        if (*p != *q) {
            cout << "您的猜测错误，两个数组不相等" << endl;
            return -1;
        }
        p++;
        q++;
    }
    cout << "恭喜你全部猜对了" << endl;

    return 0;
}

