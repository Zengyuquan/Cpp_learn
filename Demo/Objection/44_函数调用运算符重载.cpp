#include <iostream>
using namespace std;

class MyPrint
{
public:
    void operator()(string test)
    {
        cout << test << endl;
    }

};

class MyAdd
{
public:
    int operator()(int num1, int num2)
    {
        return num1 + num2;
    }
};

void MyPrint02(string test)
{
    cout << test << endl;
}

void test01()
{
    MyPrint myPrint;

    myPrint("Hello world");     // 由于使用起来非常类似于函数调用，因此称为仿函数

    MyPrint02("Hello world");
}

void test02()
{
    MyAdd myAdd;

    int ret = myAdd(100, 100);
    cout << "ret = " << ret << endl;

    // 匿名函数对象
    cout << MyAdd()(100,200) << endl;
}

int main()
{
//    test01();
    test02();

    return 0;
}