#include <iostream>
using namespace std;

class Person
{
public:
    // this指针的本质是   指针常量    指针的指向不可以修改的
    // const Person * const this;
    // 在成员函数后面加const，修饰的是this指向，让指针指向的值不可以修改
    void showPerson()   const
    {
//        this->m_A = 100;
        this->m_B = 100;
    }

    int m_A;
    mutable int m_B;        // 特殊变量，即使在常函数中，也可以修改这个值，加关键字mutable
};

void test01()
{
    Person p;
    p.showPerson();
}

// 常对象
void test02()
{
//    const Person p;     在对象前加const，变为常对象
}

int main()
{

    return 0;
}