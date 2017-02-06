#include <iostream>

using namespace std;

void f()
{
    cout << "该函数无需参数" << endl;
}

void f(int) 
{
    cout << "该函数有一个整型参数" << endl;
}

void f(int, int)
{
    cout << "该函数有两个整型参数" << endl;
}

void f(double a, double b = 3.14)
{
    cout << "该函数有两个双精度浮点型参数" << endl;
}

int main(int argc, char *argv[])
{
    // f(2.56, 42);     // 无法判断f(int, int) 与 f(double a, double b = 3.14)孰优孰劣，有二义性，拒绝请求
    f(42);
    f(42, 0);
    f(2.56, 3.14);

    return 0;
}

