#include <iostream>
#include <vector>
using namespace std;

void test01() {
    vector<vector<int>> v;

    // 创建小容器
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;

    // 向小容器中添加数据
    for (int i = 0; i < 4; i++)
    {
        v1.push_back(i + 1);
        v1.push_back(i + 2);
        v1.push_back(i + 3);
        v1.push_back(i + 4);
    }

    // 将小容器插入到大容器中
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    for (vector<vector<int>>::iterator it = v.begin(); it != v.end() ; it++)
    {
        // (*it) ------- 容器 vector<int>
        for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end() ; vit++) {
            cout << *vit << " ";
        }
        cout << endl;
    }
}

int main()
{
    test01();

    return 0;
}