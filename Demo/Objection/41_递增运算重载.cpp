#include <iostream>
using namespace std;

class Myinteger
{
    friend ostream& operator<<(ostream &cout, Myinteger myint);

public:
    Myinteger()
    {
        m_Num = 0;
    }

    // 重载前置++运算符
    Myinteger& operator++()
    {
        // 先进行操作
        m_Num++;

        // 再返回
        return *this;
    }
    // 重载后置++运算符    int表示作为参数   可以用于区分前置和后置，起到函数重载
    Myinteger operator++(int)
    {
        // 先记录当时结果
        Myinteger temp = *this;

        // 后递增
        m_Num++;
        return temp;
    }
private:
    int m_Num;
};

ostream& operator<<(ostream &cout, Myinteger myint)
{
    cout << myint.m_Num;

    return cout;
}

void test01()
{
    Myinteger myint;

    cout << ++(++myint) << endl;
    cout << myint << endl;
}

void test02()
{
    Myinteger myint;

    cout << myint++ << endl;
    cout << myint << endl;
}
int main()
{
    test01();
    test02();

    return 0;
}