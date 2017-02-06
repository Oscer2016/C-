#include <iostream>

using namespace std;

// 该函数只用于统计执行的次数
unsigned myCnt() 
{
    static unsigned iCnt = 0;  // iCnt是静态局部变量
    ++iCnt;
    return iCnt;
}

int main(int argc, char *argv[])
{
    cout << "请输入任意字符后按回车键继续" << endl;
    char ch;
    while (cin >> ch) {
        cout << "函数myCnt()的执行次数是: " << myCnt() << endl;
    }

    return 0;
}

