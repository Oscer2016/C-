#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string currString, preString;
    bool bl = true;
    cout << "请输入一组字符串: " << endl;
    while (cin >> currString) {
        if (!isupper(currString[0])) {
            continue;
        }
        if (currString == preString) {
            bl = false;
            cout << "连续出现的字符串是: " << currString << endl;
            break;
        }
        preString = currString;
    }
    if (bl) {
        cout << "没有出现连续的字符串" << endl;
    }

    return 0;
}

