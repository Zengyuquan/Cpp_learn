#include <iostream>
using namespace std;

class Building;

class GoodGay
{
public:
    GoodGay();

    void visit();       // 参观函数 访问Building中的属性

    Building * building;
};

class Building
{
    // 好朋友
    friend class GoodGay;
public:
    Building();

public:
    string m_SittingRoom;       // 客厅

private:
    string m_BedRoom;           // 卧室
};

Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}
GoodGay::GoodGay()
{
    //创建建筑物对象
    building = new Building;
}

void GoodGay::visit()
{
    cout << "好基友全局函数    正在访问：" << building->m_SittingRoom << endl;

    cout << "好基友全局函数    正在访问：" << building->m_BedRoom << endl;

}

void test01()
{
    GoodGay gg;
    gg.visit();
}

int main()
{
    test01();

    return 0;
}