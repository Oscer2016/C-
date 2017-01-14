/*************************************************************************
	> File Name: example7_3.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月12日 星期四 12时51分23秒
 ************************************************************************/

#include <iostream>
#include "Sales_data.h"
using namespace std;

int main(int argc, char *argv[])
{
	cout << "请输入交易记录(ISBN、销售量、原价、实际售价):" << endl;
    Sales_data total;                   // 保存下一条记录的变量
    // 读入第一条交易记录，并确保有数据可以处理
    if (cin >> total) {
        Sales_data trans;               // 保存和的变量
        // 读入并处理剩余交易记录
        while (cin >> trans) {
            // 如果我们仍在处理相同的书
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);         // 更新销售总额
            } else {
                // 打印前一本书的结果
                cout << total << endl;
                total = trans;          // total现在表示下一本书的销售额
            }
        }
        cout << total << endl;          // 打印最后一本书的结果
    } else {
        // 没有输入！警告读者
        cerr << "No data?!" << endl;
        return -1;                      // 表示失败
    }
    return 0;
}

