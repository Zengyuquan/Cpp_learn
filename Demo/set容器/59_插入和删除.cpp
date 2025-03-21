#include <iostream>
#include <set>
using namespace std;

void printSet(set<int> &s)
{
    for (set<int>::iterator it = s.begin(); it != s.end() ; it++) {
        cout << *it << " ";
    }
    cout << endl;
}

// 大小
void test01() {
    set<int> s1;

    // 插入数据
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    // 打印容器
    printSet(s1);

    // 删除
    s1.erase(s1.begin());
    printSet(s1);

    // 删除版本重载
    s1.erase(30);
    printSet(s1);

    // 清空
//    s1.erase(s1.begin(), s1.end());
    s1.clear();
    printSet(s1);
}

int main()
{
    test01();


    return 0;
}