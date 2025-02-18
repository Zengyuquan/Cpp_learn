#include <iostream>
using namespace std;

// 类模板和函数模板的区别
template<class NameTYpe, class AgeType = int>
class Person
{
public:
    Person(NameTYpe m_Name, AgeType m_Age)
    {
        this->m_Name = m_Name;
        this->m_Age = m_Age;
    }

    void showPerson()
    {
        cout << "name:" << m_Name << " age:" << m_Age << endl;
    }
    NameTYpe m_Name;
    AgeType m_Age;
};

// 1、类模板没有自动类型推导使用方式
void test01()
{
    //Person p("孙悟空", 1000);      // 旧版本会报错，现版本C++已支持

    Person<string, int>p("孙悟空", 1000);
    p.showPerson();
}

// 2、类模板在模板参数列表中可以有默认参数
void test02()
{
    Person<string>p("猪八戒", 999);
    p.showPerson();
}

int main()
{
    test01();
    test02();

    return 0;
}