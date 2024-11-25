#include <iostream>
using namespace std;

class Base1
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son1:public Base1
{
public:
    void func()
    {
        m_A = 10;       //父类中的公共权限成员 到子类中依然是公共权限
        m_B = 10;       //父类中的保护权限成员 到子类中依然是保护权限
        //m_C = 10;     //父类中的私有权限成员 子类中访问不到
    }
};

void test01()
{
    Son1 s1;
    s1.m_A = 100;
//    s1.m_B = 100;     // 保护权限
}

class Base2
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son2: protected Base2
{
public:
    void func()
    {
        m_A = 10;       //父类中的公共权限成员 到子类中依然是保护权限
        m_B = 10;       //父类中的保护权限成员 到子类中依然是保护权限
        //m_C = 10;     //父类中的私有权限成员 子类中访问不到
    }
};

void test02()
{
    Son2 s1;
//    s1.m_A = 100;     // 保护权限
//    s1.m_B = 100;     // 保护权限
}

class Base3
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son3: private Base3
{
public:
    void func()
    {
        m_A = 10;       //父类中的公共权限成员 到子类中依然是私有权限
        m_B = 10;       //父类中的保护权限成员 到子类中依然是私有权限
        //m_C = 10;     //父类中的私有权限成员 子类中访问不到
    }
};

void test03()
{
    Son3 s1;
//    s1.m_A = 100;     // 私有权限
//    s1.m_B = 100;     // 私有权限
}

class GrandSon3:public Son3
{
public:
    void func()
    {
//        m_A = 100;          // 到了Son3中 m_A变为私有，即使是儿子，也是不能访问的
//        m_B = 100;          // 到了Son3中 m_B变为私有，即使是儿子，也是不能访问的
    }
};

int main()
{

    return 0;
}