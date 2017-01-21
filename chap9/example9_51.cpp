/*************************************************************************
	> File Name: example9_51.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月21日 星期六 10时45分56秒
 ************************************************************************/

#include <iostream>
#include <string>
#include "date.h"

using namespace std;

int main(int argc, char *argv[])
{
    string dates[] = {"Jan 1,2014", "February 1 2014", "3/1/2014",
                      // "Jcn 1,2014",
                      // "Janvary 1,2014",
                      // "Jan 32,2014",
                       "Jan 1/2014",
                       "3 1 2014"
                     };
	try {
        for (auto ds : dates) {
            date d1(ds);
            cout << d1;
        }
    } catch (invalid_argument e) {
        cout << e.what() << endl;
    }
    
    return 0;
}

