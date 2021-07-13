//单继承和多继承的虚表结构
/*
#include <iostream>
#include<string>
using namespace std;

class Base
{
public:
    virtual void B_fun1() { cout << "Base::B_fun1()" << endl; }
    virtual void B_fun2() { cout << "Base::B_fun2()" << endl; }
    virtual void B_fun3() { cout << "Base::B_fun3()" << endl; }
};

class Derive : public Base
{
public:
    virtual void B_fun3() { cout << "Base::D_fun3()" << endl; }
    virtual void D_fun1() { cout << "Derive::D_fun1()" << endl; }
    virtual void D_fun2() { cout << "Derive::D_fun2()" << endl; }
    virtual void D_fun3() { cout << "Derive::D_fun3()" << endl; }
};
int main()
{
    Base* p = new Derive();//基类指针创建派生类对象(新建一块内存空间用指针指向这个内存空间的起始位置)
    p->B_fun1(); // Base::B_fun1() 若没有覆盖则调用基类方法
    p->B_fun3();//若覆盖则调用派生类方法
    Base B;
    Derive D;
    B.B_fun1();
    D.B_fun3();
    //B = D;//可以将派生类对象赋值给基类
    //B.B_fun3();//但赋值后仍然只能调用基类函数
    //D = B;//但不能将基类赋值给派生类
    string* a = new string();
    string b;
    return 0;
}
*/