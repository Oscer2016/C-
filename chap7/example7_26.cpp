/*************************************************************************
	> File Name: example7_26.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月12日 星期四 20时08分43秒
 ************************************************************************/

// 隐式内联，函数定义放在类的内部
class Sales_data {
public:
    double avg_price() const {
        if (units_sold) {
            return revenue / units_sold;
        } else {
            return 0;
        }
    }
};

// 显式内联，把avg_price函数的定义放在类的外部，并且指定inline
class Sales_data {
    double avg_price() const;
};

inline double Sales_data::avg_price() const {
    if (units_sold) {
        return revenue / units_sold;
    } else {
        return 0;
    }
}
