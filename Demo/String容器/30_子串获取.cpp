#include <iostream>
using namespace std;

void test01()
{
    string str = "abcdef";
    string substr = str.substr(1, 3);
    cout << "substr = " << substr << endl;
}

void test02()
{
    string email = "zhangsan@sina.com";

    int pos = email.find("@");

    string userName = email.substr(0, pos);
    cout << "userName = " << userName << endl;
}

int main()
{
    test01();
    test02();

    return 0;
}