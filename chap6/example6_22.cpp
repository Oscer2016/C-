#include <iostream>

using namespace std;

// 该函数既不交换指针，也不交换指针所致的内容
void SwapPointer1(int *p, int *q)
{
    int *temp = p;
    p = q;
    q = temp;
}

// 该函数交换指针所致的内容
void SwapPointer2(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

// 该函数交换指针本身的值，即交换指针所致的内存地址
void SwapPointer3(int *&p, int *&q) 
{
    int *temp = p;
    p = q;
    q = temp;
}

int main(int argc, char *argv[])
{
    int a = 5, b = 10;
    int *p = &a, *q = &b;
    cout << "交换前: " << "a = " << a << ", b = " << b << endl;
    cout << "p的值是: " << p << ", q 的值是: " << q << endl;
    cout << "p所指的值是: " << *p << ", q所指的值是: " << *q << endl;
    SwapPointer1(p, q);
    cout << "交换后: " << "a = " << a << ", b = " << b << endl;
    cout << "p的值是: " << p << ", q 的值是: " << q << endl;
    cout << "p所指的值是: " << *p << ", q所指的值是: " << *q << endl;
    cout << endl;

    a = 5, b = 10;
    p = &a, q = &b;
    cout << "交换前: " << "a = " << a << ", b = " << b << endl;
    cout << "p的值是: " << p << ", q 的值是: " << q << endl;
    cout << "p所指的值是: " << *p << ", q所指的值是: " << *q << endl;
    SwapPointer2(p, q);
    cout << "交换后: " << "a = " << a << ", b = " << b << endl;
    cout << "p的值是: " << p << ", q 的值是: " << q << endl;
    cout << "p所指的值是: " << *p << ", q所指的值是: " << *q << endl;
    cout << endl;

    a = 5, b = 10;
    p = &a, q = &b;
    cout << "交换前: " << "a = " << a << ", b = " << b << endl;
    cout << "p的值是: " << p << ", q 的值是: " << q << endl;
    cout << "p所指的值是: " << *p << ", q所指的值是: " << *q << endl;
    SwapPointer3(p, q);
    cout << "交换后: " << "a = " << a << ", b = " << b << endl;
    cout << "p的值是: " << p << ", q 的值是: " << q << endl;
    cout << "p所指的值是: " << *p << ", q所指的值是: " << *q << endl;
    cout << endl;

    return 0;
}

