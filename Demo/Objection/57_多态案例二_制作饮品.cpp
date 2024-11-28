#include <iostream>
using namespace std;

class AbstractDriking
{
public:
    virtual void Boil() = 0;
    virtual void Brew() = 0;
    virtual void PourInCup() = 0;
    virtual void PutSomething() = 0;

    void makeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

// 制作咖啡
class Coffee:public AbstractDriking
{
public:
    virtual void Boil()
    {
        cout << "煮怡宝" << endl;
    };
    virtual void Brew()
    {
        cout << "冲咖啡" << endl;
    };
    virtual void PourInCup()
    {
        cout << "倒入杯中" << endl;
    };
    virtual void PutSomething()
    {
        cout << "加半糖" << endl;
    };
};

// 制作茶
class Tea:public AbstractDriking
{
public:
    virtual void Boil()
    {
        cout << "煮百岁山" << endl;
    };
    virtual void Brew()
    {
        cout << "冲泡茶叶" << endl;
    };
    virtual void PourInCup()
    {
        cout << "倒入杯中" << endl;
    };
    virtual void PutSomething()
    {
        cout << "啥都不加" << endl;
    };
};

void doWork(AbstractDriking * abs)
{
    abs->makeDrink();
    delete abs;
}

void test01()
{
    // 制作咖啡
    doWork(new Coffee);

    cout << "-----------" << endl;

    // 制作茶
    doWork(new Tea);
}

int main()
{
    test01();
    
    return 0;
}