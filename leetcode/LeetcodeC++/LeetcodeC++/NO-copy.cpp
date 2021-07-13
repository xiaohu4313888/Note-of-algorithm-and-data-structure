class Uncopyable
{
public:
    Uncopyable() {}
    ~Uncopyable() {}

private:
    Uncopyable(const Uncopyable&);            // 拷贝构造函数
    Uncopyable& operator=(const Uncopyable&); // 赋值构造函数
};
class A : private Uncopyable // 注意继承方式
{
};
