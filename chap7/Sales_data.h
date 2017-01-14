/*
 * This file contains code from "C++ Primer, Fifth Edition", by Stanley B.
 * Lippman, Josee Lajoie, and Barbara E. Moo, and is covered under the
 * copyright and warranty notices given in that book:
 * 
 * "Copyright (c) 2013 by Objectwrite, Inc., Josee Lajoie, and Barbara E. Moo."
 * 
 * 
 * "The authors and publisher have taken care in the preparation of this book,
 * but make no expressed or implied warranty of any kind and assume no
 * responsibility for errors or omissions. No liability is assumed for
 * incidental or consequential damages in connection with or arising out of the
 * use of the information or programs contained herein."
 * 
 * Permission is granted for this code to be used for educational purposes in
 * association with the book, given proper citation if and when posted or
 * reproduced.Any commercial use of this code requires the explicit written
 * permission of the publisher, Addison-Wesley Professional, a division of
 * Pearson Education, Inc. Send your request for permission, stating clearly
 * what code you would like to use, and in what specific way, to the following
 * address: 
 * 
 * Pearson Education, Inc.
 * Rights and Permissions Department
 * One Lake Street
 * Upper Saddle River, NJ  07458
 * Fax: (201) 236-3290
*/
 
#ifndef SALES_DATA_H
#define SALES_DATA_H
 
#include <string>
#include <iostream>
 
class Sales_data {
 
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::ostream &print(std::ostream&, const Sales_data&);
friend std::istream &read(std::istream&, Sales_data&);
public:
    // constructors
    Sales_data(): units_sold(0), revenue(0.0) {
  
    }
    Sales_data(const std::string &s): 
           bookNo(s), units_sold(0), revenue(0.0) {
  
    }
    Sales_data(const std::string &s, unsigned n, double p):
           bookNo(s), units_sold(n), revenue(p*n) {
  
    }
    Sales_data(const std::string &book, const unsigned num,
              const double sellp, const double salep);
    Sales_data(std::istream &is);
 
    // operations on Sales_data objects
    std::string isbn() const {
        return bookNo; 
    }
    Sales_data &combine(const Sales_data &rhs) {
        units_sold += rhs.units_sold;   // 把rhs的成员加到this对象的成员上
        revenue += rhs.revenue;         
        return *this;                   //返回调用该函数的对象
    }
    double avg_price() const {
        if (units_sold) {
            return revenue/units_sold;
        } else {
            return 0;
        }
    }
private:
    std::string bookNo; 		// 书籍编号，隐式初始化为空串
    unsigned units_sold = 0;    // 销售量，显式初始化为0
    double sellingprice = 0.0;  // 原始价格
    double saleprice = 0.0;     // 实售价格
    double discount = 0.0;      // 折扣
    double revenue; 			// 收入
 
};

Sales_data::Sales_data(std::istream &is) {
    is >> *this;
}

Sales_data::Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep) {
    bookNo = book;
    units_sold = num;
    sellingprice = sellp;
    saleprice = salep;
    if (sellingprice == 0) {
        discount = saleprice / sellingprice;        // 计算实际折扣
    }
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &read(std::istream &is, Sales_data &item) {
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.sellingprice 
    << " " << item.saleprice << " " << item.discount;
    return os;
}
 
// used in future chapters
inline
bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs) {
    return lhs.isbn() < rhs.isbn();
}
#endif
