#include <iostream>
using namespace std;

// 查找
void test01()
{
    string str1 = "abcdefg";
    int pos = str1.find("de");

    if (pos == -1)
    {
        cout << "未找到字符串" << endl;
    }
    else
    {
        cout << "找到字符串，pos = " << pos << endl;
    }

    // rfind 和 find 的区别
    // rfind从右往左查找  find从左往右查找
    pos = str1.rfind("de");
    cout << "pos = " << pos << endl;
}

// 替换
void test02()
{
    string str1 = "abcdefg";
    str1.replace(1, 3, "1111");
    cout << "str1 = " << str1 << endl;
}

int main()
{
    test01();
    test02();

    return 0;
}