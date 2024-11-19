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
    //Person p1;              // 默认构造函数调用
    //Person p2(10);       // 有参构造函数
    //Person p3(p2);          // 拷贝构造函数

    // 注意事项1
    // 默认调用构造函数时候，不要加()
    // 因为下面这段代码，编译器会认为是一个函数的声明，不会认为是在创建对象
//    Person p1();
//    cout << "p2的年龄为：" << p2.age << endl;
//    cout << "p3的年龄为：" << p3.age << endl;

    // 2、显示法
    Person p1;
    Person p2 = Person(10);     // 有参构造
    Person p3 = Person(p2);        // 拷贝构造

    Person(10);     // 匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象
    cout << "aaa" << endl;

    // 注意事项
    // 不要利用拷贝构造函数   初始化匿名对象  编译器会认为Person (p3) === Person p3;
    // Person(p3);
}

int main()
{

    test01();

    return 0;
}