#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person的默认构造函数调用" << endl;
    }
    Person(int age, int height)
    {
        cout << "Person的有参构造函数调用" << endl;
        m_Age = age;
        m_Height = new int(height);
    }
    Person(const Person & p)
    {
        cout << "Person的有参构造函数调用" << endl;
        m_Age = p.m_Age;
        // m_Height = p.m_Height;   编译器默认实现就是这行代码
        // 深拷贝操作
        m_Height = new int(*p.m_Height);
    }
    ~Person()
    {
        if(m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
        cout << "Person的析构函数调用" << endl;
    }

    int m_Age;
    int * m_Height;
};

void test01()
{
    Person p1(18, 160);

    Person p2(p1);


    cout << "p1的年龄为：" << p1.m_Age << "\t身高为：" << *p1.m_Height <<endl;
    cout << "p2的年龄为：" << p2.m_Age << "\t身高为：" << *p2.m_Height <<endl;
}

int main()
{
    test01();

    return 0;
}