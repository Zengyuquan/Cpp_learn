#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
//    v.push_back(2);   如果是无序序列，结果未知！   二分查找，数据必须有序

    bool ret = binary_search(v.begin(), v.end(), 9);

    if (ret)
    {
        cout << "找到了元素" << endl;
    }
    else
    {
        cout << "未找到元素" << endl;
    }
}

int  main()
{
    test01();

    return 0;
}