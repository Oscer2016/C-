/*************************************************************************
	> File Name: example7_12.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月12日 星期四 17时09分18秒
 ************************************************************************/

class Sales_data {
public:                         // 构造函数的4种形式
    Sales_data() = default;
    Sales_data(const std::string &book) : bookNo(book) {  }
    Sales_data(const std::string &book, const unsigned num,
              const double sellp, const double salep);
    Sales_data(std::istream &is) {
    	is >> *this;
    }
public:
    string bookNo;              // 书籍编号，隐式初始化为空串
    unsigned units_sold = 0;    // 销售量，显式初始化为0
    double sellingprice = 0.0;  // 原始价格
    double saleprice = 0.0;     // 实售价格
    double discount = 0.0;      // 折扣
};


