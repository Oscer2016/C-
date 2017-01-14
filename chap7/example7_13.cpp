/*************************************************************************
	> File Name: example7_13.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月12日 星期四 17时17分49秒
 ************************************************************************/

#include <iostream>
#include "Sales_data.h"
using namespace std;

int main(int argc, char *argv[])
{
    Sales_data total(cin);          // 保存当前求和结果的变量
    
    // 读入一笔交易
    if ( cin ) { 
        Sales_data trans(cin);      // 读入下一条交易数据的变量
        // 读入剩余的交易
        do {
            // 检查isbn
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);           // 更新变量total当前的值
            } else {
                print(cout, total) << endl;     // 输出结果
                total = trans;                  // 处理下一本书
            }
        } while ( read(cin, trans) );
        print(cout, total) << endl;             // 输出最后一条交易
    } else {
        cerr << "No data?!" << endl;    // 通知用户，未输入任何数据
    }

    return 0;
}

