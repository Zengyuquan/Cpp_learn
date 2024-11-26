#include <iostream>
using namespace std;

class Animals
{
public:
    int m_Age;
};

// 利用虚继承    解决菱形继承的问题
// 继承之前 加上关键字   virtual     变为虚继承
// Animal类称为 虚基类
class Sheep:public virtual Animals{};
class Tou:public virtual Animals{};

class SheepTou:public Sheep, public Tou{};

void test01()
{
    SheepTou st;

    st.Sheep::m_Age = 18;
    st.Tou::m_Age = 28;

    cout << "st.Sheep::m_Age =" << st.Sheep::m_Age << endl;
    cout << "st.Tou::m_Age = " << st.Tou::m_Age << endl;

    cout << "st.m_Age = " <<st.m_Age << endl;
}

int main()
{
    test01();

    return 0;
}