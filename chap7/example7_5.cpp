/*************************************************************************
	> File Name: example7_5.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月12日 星期四 14时19分07秒
 ************************************************************************/
class Person {
private:
    string strName;        // 姓名
    string strAddress;     // 地址
public:
    string getName() const {
        return strName;
    }
    string getAddress() const {
        return strAddress;
    }
};
