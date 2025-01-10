#include <iostream>

using namespace std;
// 函数默认参数

// 如果我们自己传入参数，就是用自己的参数，如果没有，那么就用默认值

int func(int a, int b = 20, int c = 30)
{
    return a + b + c;
}

// 注意事项
// 1、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
//int func2(int a, int b = 20, int c)
//{
//    return a + b + c;
//}

// 2、如果函数声明有默认参数，函数实现就不能有默认参数
// 声明和实现只能有一个默认参数
int func2(int a, int b);
int fun2(int a = 10, int b = 20)
{
    return a + b;
}

int main()
{

    return 0;
}