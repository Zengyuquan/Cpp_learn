#include <iostream>
#include <map>

using namespace std;

class MyCompare
{
public:
    bool operator()(int v1, int v2) const
    {
        // 降序
        return v1 > v2;
    }
};

void test01()
{
    map<int, int, MyCompare> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(5, 50));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(4, 40));

    for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key = " << it->first << " value = " << it->second << endl;
    }
}

int main()
{
    test01();

    return 0;
}