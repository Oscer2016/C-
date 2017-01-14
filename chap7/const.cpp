/*************************************************************************
	> File Name: const.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2016年11月29日 星期二 19时47分59秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Screen {
public :
    //interface member functions
    //display overload on whether the object is const or not
    Screen &display(std::ostream &os) {
        do_display(os);
        return *this;
    }
    const Screen &display(std::ostream &os) const {
        do_display(os);
        return *this;
    }
private:
    //single function to do the work of displaying a Screen,
    //will be called by the display operations
    void do_display(std::ostream &os) const {
        os << contents;
    }
    //as before
};

int main(int argc, char *argv[])
{
    return 0;
}
