    #include <iostream>
    using namespace std;
    #include <fstream>

    class Person
    {
    public:
        char m_Name[64];
        int m_Age;
    };

    void test01()
    {
        // 1、包含头文件

        // 2、创建对象流
        ifstream ifs;

        // 3、打开文件
        ifs.open("Person.txt", ios::in | ios::binary);
        if (! ifs.is_open())
        {
            cout << "文件打开失败" << endl;
        }

        // 4、读文件
        Person p;
        ifs.read((char *)&p, sizeof(Person));

        cout << "姓名：" << p.m_Name << "\n年龄：" << p.m_Age <<endl;

        // 5、关闭文件
        ifs.close();
    }

    int main()
    {
        test01();

        return 0;
    }