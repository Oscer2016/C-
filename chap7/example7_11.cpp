/*************************************************************************
	> File Name: example7_11.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月12日 星期四 16时02分46秒
 ************************************************************************/
#include <iostream>
#include "Sales_data.h"
using namespace std;

class Sales_data {
public:                         // 构造函数的4种形式
    Sales_data() = default;
    Sales_data(const std::string &book) : bookNo(book) {  }
    Sales_data(const std::string &book, const unsigned num,
              const double sellp, const double salep);
    Sales_data(std::istream &is);
public:
    string bookNo;              // 书籍编号，隐式初始化为空串
    unsigned units_sold = 0;    // 销售量，显式初始化为0
    double sellingprice = 0.0;  // 原始价格
    double saleprice = 0.0;     // 实售价格
    double discount = 0.0;      // 折扣
};

Sales_data::Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep) {
    bookNo = book;
    units_sold = num;
    sellingprice = sellp;
    saleprice = salep;
    if (sellingprice == 0) {
        discount = saleprice / sellingprice;        // 计算实际折扣
    }
}

Sales_data::Sales_data(std::istream &is) {
    is >> *this;
}
 
int main()
{
    Sales_data data1;
    Sales_data data2("978-7-121-15535-2");
    Sales_data data3("978-7-121-15535-2", 100, 128, 109);
    Sales_data data4(cin);

    cout << "书籍的销售情况是：" << endl;
    cout << data1 << "\n" << data2 << "\n" << data3 << "\n" << data4 << "\n";

    return 0;
}
