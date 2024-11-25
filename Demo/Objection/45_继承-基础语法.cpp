#include <iostream>
using namespace std;

class BasePage
{
public:
    void header()
    {
        cout << "首页、公开课、登录、注册...(公共头部)" << endl;
    }
    void footer()
    {
        cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
    }
    void left()
    {
        cout << "Cpp、Java、Python...(公共头部)" << endl;
    }
};

class Java:public BasePage
{
public:
    void content()
    {
        cout << "Hello Java" << endl;
    }
};

class Python:public BasePage
{
public:
    void content()
    {
        cout << "Hello Python" << endl;
    }
};

class Cpp:public BasePage
{
public:
    void content()
    {
        cout << "Hello Cpp" << endl;
    }
};

void test01()
{
    cout << "Java" << endl;
    Java ja;
    ja.header();
    ja.left();
    ja.content();
    ja.footer();

    cout << "---------------------" << endl;

    cout << "Python" << endl;
    Python py;
    py.header();
    py.left();
    py.content();
    py.footer();

    cout << "---------------------" << endl;

    cout << "Cpp" << endl;
    Cpp Cpp;
    Cpp.header();
    Cpp.left();
    Cpp.content();
    Cpp.footer();
}

int main()
{

    test01();
    return 0;
}