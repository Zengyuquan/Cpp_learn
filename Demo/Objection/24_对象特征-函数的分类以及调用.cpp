#include <iostream>
using namespace std;

class Person
{
public:
    // 构造函数
    Person()
    {
        cout << "Person的无参构造函数" << endl;
    }
    Person(int a)
    {
        age = a;
        cout << "Person的有参构造函数" << endl;
    }
    // 拷贝的构造函数
    Person(const Person &p)
    {
        // 将传入的人身上的所有属性，拷贝到我身上
        age = p.age;
        cout << "Person的拷贝构造函数" << endl;
    }
    ~Person()
    {
        cout << "Person的析构函数" << endl;
    }
    int age;
};

void test01()
{
    // 1、括号法
    Person p1;              // 默认构造函数调用
    Person p2(10);       // 有参构造函数
    Person p3(p2);          // 拷贝构造函数

    // 注意事项1
    // 默认调用构造函数时候，不要加()
    // 因为下面这段代码，编译器会认为是一个函数的声明，不会认为是在创建对象
//    Person p1();
    cout << "p2的年龄为：" << p2.age << endl;
    cout << "p3的年龄为：" << p3.age << endl;
}

int main()
{

    test01();

    return 0;
}