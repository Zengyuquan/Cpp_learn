#include <iostream>
using namespace std;

class Person
{
public:
    void setName(string name)
    {
        m_Name = name;
    }
    string getName()
    {
        return m_Name;
    }

    void setAge(int age)
    {
        if(age < 0 || age > 150)
        {
            cout << "年龄输入有误，赋值失败" << endl;
            return;
        }
        m_Age = age;
    }
    int getAge()
    {
        return m_Age;
    }

    void setIdol(string idol)
    {
        m_Idol = idol;
    }
private:
    string m_Name;
    int m_Age;
    string m_Idol;
};

int main()
{
    Person p;
    p.setName("张三");
    cout << "姓名为：" << p.getName() << endl;

    p.setAge(-1);
    cout << "年龄为：" << p.getAge() << endl;

    p.setIdol("cxk");

    return 0;
}