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

    v.push_back(10);
    v.push_back(20);
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);

    sort(v.begin(), v.end());
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;

}

int main()
{
    test01();

    return 0;
}