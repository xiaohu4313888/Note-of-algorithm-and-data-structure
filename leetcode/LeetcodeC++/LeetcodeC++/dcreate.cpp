/*#include <iostream>

using namespace std;

class A {
public:
    int var1, var2;
    A() {
        var1 = 10;
        var2 = 20;
    }
    A(int tmp1, int tmp2) = delete;
};

int main()
{
    A ex1;
    A ex2(12, 13); // error: use of deleted function 'A::A(int, int)'
    //为类的构造函数增加 = delete 修饰符，可以达到虽然声明了构造函数但禁止使用的目的。
    return 0;
}*/
