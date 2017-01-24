#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i = 0;
    int *p1 = nullptr;
    int *p = &i;

    if (p1) {
        // 检验指针的值（即指针所指对象的地址）
        cout << "p1 pass" << endl;
    }

    if (p) {
        // 检验指针的值（即指针所指对象的地址）
        cout << "p pass" << endl;
    }

    if (*p) {
        // 检查指针所指对象的值
        cout << "i pass" << endl;
    }
    
    return 0;
}

