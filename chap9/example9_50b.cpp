/*************************************************************************
	> File Name: example9_50b.cpp
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
    vector<string> vs = {"12.3", "-4.56", "7.8e-2"};
    float sum = 0;

    for (auto iter = vs.begin(); iter != vs.end(); iter++) {
        sum += stof(*iter);
    }

    cout << "和: " << sum << endl;
    
    return 0;
}

