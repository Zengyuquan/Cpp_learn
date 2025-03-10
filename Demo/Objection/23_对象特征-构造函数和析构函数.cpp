#include <iostream>
using namespace std;

// 对象的初始化和清理
// 1、构造函数   进行初始化操作
class Person
{
public:
    // 1、构造函数
    // 没有返回值 不用写void
    // 函数名与类名相同
    // 构造函数可以有参数，可以发生重载
    // 在创造对象的时候，构造函数会自动调用，而且执行一次
    Person()
    {
        cout << "Person构造函数的调用" << endl;
    }

    // 2、析构函数   进行清理的操作
    // 没有返回值    不写void
    // 函数名和类名相同     名称前加~
    // 析构函数不可以有参数，不可以发送重载
    // 对象在销毁前 会自动调用析构函数，而且只会调用一次
    ~Person()
    {
        cout << "Person析构函数的调用" << endl;
    }
};

// 构造和析构都必须有的实现，如果我们自己不提供，编译器会编译一个空实现的构造和析构
void test01()
{
    Person p;
}
int main()
{

    test01();

    Person p;

    return 0;
}