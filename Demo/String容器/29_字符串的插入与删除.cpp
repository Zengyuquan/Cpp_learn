#include <iostream>
using namespace std;

void test01()
{
    string str = "hello";

    // 插入
    str.insert(1, "111");
    // h1111ello
    cout << "str = " << str << endl;

    // 删除
    str.erase(1, 3);
    cout << "str = " << str << endl;

}

int main()
{
    test01();

    return 0;
}