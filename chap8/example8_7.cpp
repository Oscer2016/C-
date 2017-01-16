/*************************************************************************
	> File Name: example8_7.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月15日 星期日 09时55分59秒
 ************************************************************************/

#include <iostream>
#include <fstream>
#include "Sales_data.h"
using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3) {
        cerr << "请给出输入、输出文件名" << endl;
        return -1;
    }

    ifstream in(argv[1]);
    if (!in) {
        cerr << "无法打开输入文件" << endl;
        return -1;
    }
    ofstream out(argv[2]);
    if (!out) {
        cerr << "无法打开输出文件" << endl;
        return -1;
    }

    Sales_data total;               // 保存当前求和结果的变量
    if (read(in, total)) {          // 读入下一笔交易
        Sales_data trans;           // 保存下一条交易数据的变量
        while (read(in, trans)) {   // 读入剩余的交易
            if (total.isbn() == trans.isbn()) {     // 检查isbn
                total.combine(trans);               // 更新变量total当前的值
            } else {
                print(out, total) << endl;         // 输出结果
                total = trans;                      // 处理下一本书
            }
        }
        print(out, total) << endl;                 // 输出最后一条交易
    } else {                                        // 没有输入任何信息
        cerr << "没有数据" << endl;                 // 通知用户
    }

    return 0;
}

