#include <iostream>
#include <vector>
using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    string m_Name;
    int m_Age;
};

void test01()
{
    vector<Person> v;

    Person p1("aaa", 10);
    Person p2("bbb", 10);
    Person p3("ccc", 10);
    Person p4("ddd", 10);
    Person p5("eee", 10);

    // 向容器中添加数据
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    // 遍历容器中的数据
    for (vector<Person>::iterator it = v.begin(); it != v.end() ; it++) {
//        cout << "名字为：" << (*it).m_Name << "年龄为：" << (*it).m_Age << endl;
        cout << "名字为：" << it->m_Name << "年龄为：" << it->m_Age << endl;
    }
}

void test02()
{
    vector<Person*> v;

    Person p1("aaa", 10);
    Person p2("bbb", 10);
    Person p3("ccc", 10);
    Person p4("ddd", 10);
    Person p5("eee", 10);

    // 向容器中添加数据
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    // 遍历容器中的数据
    for (vector<Person*>::iterator it = v.begin(); it != v.end() ; it++)
    {
        cout << "名字为：" << (*it)->m_Name << "年龄为：" << (*it)->m_Age << endl;
    }
}

int main()
{

    test02();
    return 0;
}