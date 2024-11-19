#include <iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        // this指针指向 被调用的成员函数 所属的对象
        this->age = age;
    }

    Person& PersonAddAge(Person &p)
    {
        this->age += p.age;
        return *this;
    }
    int age;
};

void test01()
{
    Person p1(18);
    cout << "p1的年龄为："  << p1.age << endl;
}

void test02()
{
   Person p1(10);

   Person p2(10);

   p2.PersonAddAge(p1);

   cout << "p2的年龄为："  << p2.age << endl;

   // 链式编程
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

    cout << "p2的年龄为（链式）："  << p2.age << endl;
}

int main()
{
    test02();

    return 0;
}