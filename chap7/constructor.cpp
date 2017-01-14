/*************************************************************************
	> File Name: constructor.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月14日 星期六 14时10分59秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Sales_data {
public:
    // 构造函数
    Sales_data(): units_sold(0), revenue(0.0) {
        cout << "constructor1 executed" << endl;
    }
    // 构造函数的重载
    Sales_data(const std::string &s): 
           bookNo(s), units_sold(0), revenue(0.0) {
        cout << "constructor2 executed" << endl;
    }
    // 析构函数
    ~Sales_data() {
        cout << "destructor executed" << endl;
    }
private:
    std::string bookNo; 	
    unsigned units_sold;  
    double revenue; 		
};

int main(int argc, char *argv[])
{
    Sales_data sale1; 
    Sales_data sale2("978-7-121-15535-2");
    return 0;
}

