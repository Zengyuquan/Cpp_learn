#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        m_A = 100;
    }

    void func()
    {
        cout << "Base - func()的调用" <<endl;
    }
    void func(int a)
    {
        cout << "Base - func(int a)的调用" <<endl;
    }

    int m_A;
};

class Son:public Base
{
public:
    Son()
    {
        m_A = 200;
    }

    void func()
    {
        cout << "Son - func()的调用" <<endl;
    }

    int m_A;
};

// 同名成员属性处理
void test01()
{
    Son s1;

    cout << "Son 下 m_A = " << s1.m_A <<endl;
    // 如果通过子类对象 访问父类中同名成员，需要加作用域
    cout << "Son 下 m_A = " << s1.Base::m_A <<endl;
}

void test02()
{
    Son s;
    s.func();
    s.Base::func();

    // 如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中是有同名的成员函数
    // 如果想要访问到父类中被隐藏的同名成员函数，需要加作用域
    s.Base::func(100);
}

int main()
{
    test01();
    test02();
}