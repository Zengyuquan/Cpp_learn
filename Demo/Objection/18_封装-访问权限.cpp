#include <iostream>
using namespace std;

// 公共权限 public      成员类内可以访问    类外可以访问
// 公共权限 protected   成员类内可以访问    类外不可以访问     儿子可以访问父亲的保护内容
// 公共权限 private     成员类内可以访问    类外不可以访问     儿子不可以访问父亲的私有内容

class Person
{
public:
    string m_Name;

protected:
    string m_Car;

private:
    string m_Password;

public:
    void func()
    {
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = 123456;
    }
};

int main()
{
    Person p1;

    p1.m_Name = "李四";
//    p1.m_Car = "奔驰";


    return 0;
}