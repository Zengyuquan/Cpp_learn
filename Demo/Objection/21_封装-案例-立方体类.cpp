#include <iostream>
using namespace std;

class Cube
{
public:
    void setL(double L)
    {
        m_L = L;
    }
    double getL()
    {
        return m_L;
    }

    void setW(double W)
    {
        m_W = W;
    }
    double getW()
    {
        return m_W;
    }

    void setH(double H)
    {
        m_H = H;
    }
    double getH()
    {
        return m_H;
    }

    double calculateS()
    {
        return (m_L * m_H + m_L * m_W + m_H * m_W) * 2;
    }
    double calculateV()
    {
        return m_L * m_W * m_H;
    }

    bool isSameByClass(Cube &c)
    {
        if(m_L == c.getL() && m_W == c.getW() && m_H == c.getH() )
        {
            return true;
        }
        return false;
    }

private:
    double m_L;
    double m_W;
    double m_H;
};

bool isSame(Cube &c1, Cube c2)
{
    if(c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH() )
    {
        return true;
    }
    return false;
}

int main()
{
    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cout << "c1的面积为：" << c1.calculateS() << endl;
    cout << "c1的体积为：" << c1.calculateV() << endl;

    Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(10);

    bool ret = isSame(c1, c2);
    if(ret)
    {
        cout << "c1和c2相等" << endl;
    }
    else
    {
        cout << "c1和c2不相等" << endl;
    }

    // 利用成员函数判断
    ret = c1.isSameByClass(c2);
    if(ret)
    {
        cout << "c1和c2相等" << endl;
    }
    else
    {
        cout << "c1和c2不相等" << endl;
    }

    return 0;
}