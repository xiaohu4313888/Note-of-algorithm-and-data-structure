//���̳кͶ�̳е����ṹ
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
    Base* p = new Derive();//����ָ�봴�����������(�½�һ���ڴ�ռ���ָ��ָ������ڴ�ռ����ʼλ��)
    p->B_fun1(); // Base::B_fun1() ��û�и�������û��෽��
    p->B_fun3();//����������������෽��
    Base B;
    Derive D;
    B.B_fun1();
    D.B_fun3();
    //B = D;//���Խ����������ֵ������
    //B.B_fun3();//����ֵ����Ȼֻ�ܵ��û��ຯ��
    //D = B;//�����ܽ����ำֵ��������
    string* a = new string();
    string b;
    return 0;
}
*/