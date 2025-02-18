#include <iostream>
using namespace std;

int main()
{
    // 第一种方式
    pair<string, int>p("Tom", 20);
    cout << "姓名：" << p.first << " 年龄：" << p.second << endl;

    // 第二种方式
    pair<string, int>p2 = make_pair("Jerry", 30);
    cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;


    return 0;
}