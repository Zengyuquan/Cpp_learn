#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    vector<int> v2;
    v2.resize(v.size());
    copy(v.begin(), v.end(), v2.begin());

    for_each(v2.begin(), v2.end(), myPrint);
    cout << endl;
}

int main()
{
    test01();

    return 0;
}