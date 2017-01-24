#include <iostream>
#include "Sales_item.h"

int main(int argc, char *argv[])
{
    Sales_item total, trans;
    std::cout << "请输入几条ISBN相同的销售记录：" << std::endl;
    if (std::cin >> total){
        while (std::cin >> trans) {
            std::cout << "hp" << "\n";
            if (compareIsbn(total, trans)) {
                // ISBN相同
                total = total + trans;
                std::cout << "hello" << "\n";
            } else {
                std::cout << "ISBN不同" << std::endl;
                return -1;
            }
        }
        std::cout << "汇总信息：ISBN、售出本数、销售额和平均售价为 " 
                  << total << std::endl;
    } else {
        std::cout << "没有数据" << std::endl;
        return -1;
    }

    return 0;
}

