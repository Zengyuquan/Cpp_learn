#include <iostream>
#include <functional>   // 内建函数对象头文件

using namespace std;

// 内建函数 算术仿函数

// negate 一元函数 取反函数
void test01()
{
    negate<int> n;
    cout << n(50) << endl;
}

// plus 二元运算    加法
void test02()
{
    plus<int> p;
    cout << p(10, 20) << endl;
}
int main()
{
    test01();
    test02();

    return 0;
}