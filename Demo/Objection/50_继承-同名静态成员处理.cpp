#include <iostream>
using namespace std;

class Base
{
public:
    static int m_A;

    static void func()
    {
        cout << "Son - static void func() " << endl;
    }
    static void func(int a)
    {
        cout << "Son - static void func(int a) " << endl;
    }
};
int Base::m_A = 100;

class Son:public Base
{
public:
    static int m_A;

    static void func()
    {
        cout << "Son - static void func() " << endl;
    }
};
int Son::m_A = 200;

// 同名静态成员属性
void test01()
{
    Son s;
    // 1、通过对象访问
    cout << "通过对象访问" << endl;
    cout << "Son 下 m_A = " << s.m_A << endl;
    cout << "Base 下 m_A = " << s.Base::m_A << endl;

    // 2、通过类名访问
    cout << "通过类名访问" << endl;
    cout << "Son 下 m_A = " << Son::m_A << endl;
    cout << "Base 下 m_A = " << Son::Base::m_A << endl;

}

// 同名静态成员函数
void test02()
{
    // 1、通过对象访问
    Son s;
    s.func();
    s.Base::func();

    // 2、通过类名访问
    Son::func();
    Son::Base::func();

    // 如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中是有同名的成员函数
    // 如果想要访问到父类中被隐藏的同名成员函数，需要加作用域
    Son::Base::func(100);
}

int main()
{
    test01();

    return 0;
}