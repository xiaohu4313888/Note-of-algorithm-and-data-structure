class Uncopyable
{
public:
    Uncopyable() {}
    ~Uncopyable() {}

private:
    Uncopyable(const Uncopyable&);            // �������캯��
    Uncopyable& operator=(const Uncopyable&); // ��ֵ���캯��
};
class A : private Uncopyable // ע��̳з�ʽ
{
};
