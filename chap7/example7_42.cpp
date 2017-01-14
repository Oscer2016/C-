/*************************************************************************
	> File Name: example7_42.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月13日 星期五 17时23分43秒
 ************************************************************************/
class Book {
private:
    string Name, ISBN, Author, Publisher;
    double Price = 0;
public:
    Book(const string &n, const string &I, double pr, const string &a, const string &p)
    : Name(n), ISBN(I), Price(pr), Author(a), Publisher(p) {  }
    Book() : Book("", "", 0, "", "") {  }
    Book(std::istream &is) : Book() { 
        is >> *this;
    }
};
