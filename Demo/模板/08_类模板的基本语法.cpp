#include <iostream>
using namespace std;

// 类模板
template<class NameType, class AgeType>
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    void showPerson()
    {
        cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
    }
    NameType m_Name;
    AgeType m_Age;
};

void test01()
{
    // 指定NameType 为 string 类型， AgeType为 int 类型
    Person<string, int>p1("孙悟空", 999);
    p1.showPerson();
}

int main()
{

    test01();
    return 0;
}