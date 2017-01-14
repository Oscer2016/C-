/*************************************************************************
	> File Name: example7_35.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月12日 星期四 21时52分06秒
 ************************************************************************/
typedef string Type; 
Type initVal();             // 声明函数initVal，返回类型是Type

class Exercise {            // 定义一个新类
public:
    typedef double Type;    // 在内层作用域重新声明类型别名Type表示double
    Type setVal(Type);      // 声明函数setVal，参数和返回值的类型都是Type
    Type initVal();         // 在内层作用域重新声明函数initVal，返回类型是Type
private:
    int val;                // 声明私有数据成员val
};

// 定义函数setVal，此时的Type显然是外层作用域的
Exercise::Type setVal(Type parm) {
    val = parm + initVal();     // 此处使用的是类内的initVal函数
    return val;
} 
