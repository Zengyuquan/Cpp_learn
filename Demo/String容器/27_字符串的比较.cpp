#include <iostream>
using namespace std;

void test01()
{
    string str1 = "hello";
    string str2 = "xello";

    if(str1.compare(str2) == 0)
    {
        cout << "str1 等于 str2" << endl;
    }
    else if(str1.compare(str2) > 0)
    {
        cout << "str1 大于 str" << endl;
    }
    else
    {
        cout << "str1 小于 str" << endl;
    }
}

int main()
{
    test01();

    return 0;
}