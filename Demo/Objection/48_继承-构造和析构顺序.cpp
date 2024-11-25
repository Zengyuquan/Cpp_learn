#include <iostream>
using namespace std;

class Base1
{
public:
    Base1()
    {
        cout << "Base的构造函数！" << endl;
    }
    ~Base1()
    {
        cout << "Base的析构函数！" << endl;
    }
};

class Son1:public Base1
{
public:
    Son1()
    {
        cout << "Son的构造函数！" << endl;
    };
    ~Son1()
    {
        cout << "Son的析构函数！" << endl;
    }
};

void test01()
{
//    Base1 b;

    Son1 s1;

}

int main()
{
    test01();

//    Base的构造函数！
//    Son的构造函数！
//    Son的析构函数！
//    Base的析构函数！
    return 0;
}
