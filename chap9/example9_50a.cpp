/*************************************************************************
	> File Name: example9_50a.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月20日 星期五 22时18分14秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<string> vs = {"123", "+456", "-789"};
    int sum = 0;

    for (auto iter = vs.begin(); iter != vs.end(); iter++) {
        sum += stoi(*iter);
    }

    cout << "和: " << sum << endl;
    
    return 0;
}

