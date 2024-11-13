#include<iostream>

using namespace std;

class Student
{
public:     // 公共权限
    // 类中的属性和行为 我们统一称为  成员
    // 成员属性 成员变量
    // 属性
    string m_Name;
    int m_Id;

    void setName(string name)
    {
        m_Name = name;
    }

    void setId(int id)
    {
        m_Id = id;
    }

    // 成员函数 成员方法
    // 行为
    void showStudent()
    {
        cout << "姓名：" << m_Name << "\t学号：" << m_Id << endl;
    }
};

int main()
{
    Student s1;
    s1.setName("张三");
    s1.setId(1);
    s1.showStudent();

    Student s2;
    s2.m_Name = "李四";
    s2.m_Id = 124;
    s2.showStudent();

    return 0;
}