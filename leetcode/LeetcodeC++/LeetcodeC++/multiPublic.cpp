/*
#include <iostream>
using namespace std;


class Base1
{
public:
    virtual void B1_fun1() { cout << "Base1::B1_fun1()" << endl; }
    virtual void B1_fun2() { cout << "Base1::B1_fun2()" << endl; }
    virtual void B1_fun3() { cout << "Base1::B1_fun3()" << endl; }
};
class Base2
{
public:
    virtual void B2_fun1() { cout << "Base2::B2_fun1()" << endl; }
    virtual void B2_fun2() { cout << "Base2::B2_fun2()" << endl; }
    virtual void B2_fun3() { cout << "Base2::B2_fun3()" << endl; }
};
class Base3
{
public:
    virtual void B3_fun1() { cout << "Base3::B3_fun1()" << endl; }
    virtual void B3_fun2() { cout << "Base3::B3_fun2()" << endl; }
    virtual void B3_fun3() { cout << "Base3::B3_fun3()" << endl; }
};

class Derive : public Base1, public Base2, public Base3
{
public:
    virtual void D_fun1() { cout << "Derive::D_fun1()" << endl; }
    virtual void D_fun2() { cout << "Derive::D_fun2()" << endl; }
    virtual void D_fun3() { cout << "Derive::D_fun3()" << endl; }
};

int main() {
    Base1* p = new Derive();
    p->B1_fun1(); // Base1::B1_fun1() �޸��������������ඨ��˳���һ��
    return 0;
}


class Base1
{
public:
    virtual void fun1() { cout << "Base1::fun1()" << endl; }
    virtual void B1_fun2() { cout << "Base1::B1_fun2()" << endl; }
    virtual void B1_fun3() { cout << "Base1::B1_fun3()" << endl; }
};
class Base2
{
public:
    virtual void fun1() { cout << "Base2::fun1()" << endl; }
    virtual void B2_fun2() { cout << "Base2::B2_fun2()" << endl; }
    virtual void B2_fun3() { cout << "Base2::B2_fun3()" << endl; }
};
class Base3
{
public:
    virtual void fun1() { cout << "Base3::fun1()" << endl; }
    virtual void B3_fun2() { cout << "Base3::B3_fun2()" << endl; }
    virtual void B3_fun3() { cout << "Base3::B3_fun3()" << endl; }
};

class Derive : public Base1, public Base2, public Base3
{
public:
    virtual void fun1() { cout << "Derive::fun1()" << endl; }
    virtual void D_fun2() { cout << "Derive::D_fun2()" << endl; }
    virtual void D_fun3() { cout << "Derive::D_fun3()" << endl; }
};

int main() {
    Base1* p1 = new Derive();
    Base2* p2 = new Derive();
    Base3* p3 = new Derive();
    p1->fun1(); // Derive::fun1()
    p2->fun1(); // Derive::fun1()
    p3->fun1(); // Derive::fun1() �и�������������Լ��ĺ���
    return 0;
}

#include <iostream>
using namespace std;

// ��ӻ���
class Base1
{
public:
    int var1;
};

// ֱ�ӻ���
class Base2 : public Base1
{
public:
    int var2;
};

// ֱ�ӻ���
class Base3 : public Base1
{
public:
    int var3;
};

// ������
class Derive : public Base2, public Base3
{
public:
    void set_var1(int tmp) { var1 = tmp; } // error: reference to 'var1' is ambiguous. ������ͻ
    //����취
    //1.���������ʼ����var1�����ĸ���Base2::var1 = tmp��
    //2.ʹ����̳е�Ŀ�ģ���֤����������ͻ�ĳ�Ա��������������ֻ����һ�ݣ���ʹ��ӻ����еĳ�Ա����������ֻ����һ�ݡ�
    //�����μ̳й�ϵ�У���ӻ����Ϊ����ֱ࣬�ӻ���ͼ�ӻ���֮��ļ̳й�ϵ��Ϊ��̳С�
    //ʵ�ַ�ʽ���ڼ̳з�ʽǰ����� virtual �ؼ��֡�
    //ʹ����̳е�Ŀ�ģ���֤����������ͻ�ĳ�Ա����/��Ա��������������ֻ����һ��
    void set_var2(int tmp) { var2 = tmp; }
    void set_var3(int tmp) { var3 = tmp; }
    void set_var4(int tmp) { var4 = tmp; }

private:
    int var4;
};

int main()
{
    Derive d;
    return 0;
}

#include <iostream>
using namespace std;

void fun1(int& tmp)
{
    cout << "fun1(int& tmp):" << tmp << endl;
}

void fun2(int&& tmp)
{
    cout << "fun2(int&& tmp)" << tmp << endl;
}

int main()
{
    int var = 11;
    fun1(12); // error: cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
    fun1(var);
    fun2(1);
    fun2(var);
}*/
