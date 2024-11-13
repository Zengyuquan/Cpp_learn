#include <iostream>
using namespace std;

class C1
{
    int m_A;    // 默认权限是    私有
};
struct C2
{
    int m_B;    // 默认权限是    公有
};

int main()
{

    C1 c1;
//    c1.m_A = 100;

    C2 c2;
    c2.m_B = 100;

    return 0;
}