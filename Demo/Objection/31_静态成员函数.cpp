#include <iostream>
using namespace std;
// 静态成员函数
// 所有对象共享同一个函数
// 静态成员函数只能访问静态成员变量
class Person
{
public:
    // 静态成员函数
    static void func()
    {
        m_A = 100;      //静态成员函数可以访问 静态成员变量
        //m_B = 200;      //静态成员函数 不可以访问 非静态成员变量,无法区分到底是哪个对象的
        cout <<"static void func调用" << endl;
    }

    static int m_A;     //静态成员变量
    int m_B;            //非静态成员变量

    // 静态成员函数也是有访问权限的
private:
    static void func2()
    {
        cout <<"static void func2调用" << endl;
    }
};
int Person::m_A = 100;

void test01()
{
    // 1.通过对象访问
    Person p;
    p.func();

    // 2.通过类名访问
    Person::func();

    // Person::func2();     类外访问不到私有的静态成员函数
}

int main()
{
    test01();
    return 0;
}