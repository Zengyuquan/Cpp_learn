#include <iostream>
using namespace std;

// 函数模板
template<typename T>    //声明一个模板，告诉编辑器后面的代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test01()
{
    int a = 10;
    int b = 20;

    // 1、自动类型转换
    // mySwap(a, b);

    // 2、显示指定类型
    mySwap<int>(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


}

int main()
{
    test01();

    return 0;
}