/*************************************************************************
	> File Name: example7_22.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月12日 星期四 19时07分13秒
 ************************************************************************/

class Person {
private:
    string strName;         // 姓名
    string strAddress;      // 地址
public:
    Person() = default;
    Person(const string &name, const string &add) {
        strName = name;
        strAddress = add;
    }
    Person(std::istream &is) {
        is >> *this;
    }
public:
    string getName() const {
        return strName;         // 返回姓名
    }
    string getAddress() const {
        return strAddress;      // 返回地址
    }
};

