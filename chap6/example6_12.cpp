#include <iostream>

using namespace std;

void mySWAP(int &i, int &j)
{
    int tmp = i;
    i = j;
    j = tmp;
}

int main(int argc, char *argv[])
{
    int a = 5, b = 10;
    
    cout << "交换前: a = " << a << ", b = " << b << endl;
    mySWAP(a, b);
    cout << "交换后: a = " << a << ", b = " << b << endl;
    
    return 0;
}

