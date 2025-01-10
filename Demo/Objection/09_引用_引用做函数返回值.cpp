#include <iostream>

using namespace std;

// 引用做函数返回值时
// 1、不要返回局部变量的引用
int& test01()
{
    int a = 10;     // 局部变量存放在四区中的堆区
    return a;
}

// 2、函数的调用可以作为左值
int& test02()
{
    static int a = 10;      // 静态变量，存放在全局区，全局区上的数据在程序结束后系统自动释放
    return a;
}

int main()
{
//    int &ref = test01();
    int &ref = test02();
    cout << "ref = " << ref << endl;

    // 函数返回值作为左值
    test02() = 1000;    // 如果函数的返回值是引用，这个函数调用可以作为左值
    cout << "ref = " << ref << endl;
    return 0;
}