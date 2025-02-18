#include <iostream>
#include <list>
using namespace std;

void test01() {
    list<int> L1;

    // 尾插
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

//    L1[0];        不可以用[]访问list容器中的元素
//    L1.at(0);     不可以用at方式访问list容器

    cout << "第一个元素为：" << L1.front() << endl;
    cout << "最后一个元素为：" << L1.back() << endl;

    // 验证迭代器所不支持随机范围的
    list<int>::iterator it = L1.begin();
    it--;   // 支持双向
    it++;

//    it = it + 1;      不支持随机访问
}

int main()
{
    test01();

    return 0;
}