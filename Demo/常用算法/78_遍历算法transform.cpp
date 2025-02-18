#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Transform
{
public:
    int operator()(int val)
    {
        return val + 100;
    }
};

class print
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    vector<int> vTarget;        // 目标容器
    vTarget.resize(v.size());       // 目标容器 需要提前开辟空间

    transform(v.begin(), v.end(), vTarget.begin(), Transform());

    for_each(vTarget.begin(), vTarget.end(), print());
    cout << endl;
}

int main()
{
    test01();

    return 0;
}