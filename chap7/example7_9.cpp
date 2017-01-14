/*************************************************************************
	> File Name: example7_9.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月12日 星期四 15时20分01秒
 ************************************************************************/
std::istream &read(std::istream &is, Person &per) {
    is >> per.strName >> per.strAddress;
    return is;
}

std::ostream &print(std::ostream &os, const Person &per) {
    os << per.getName() << per.getAddress();
    return os;
}
