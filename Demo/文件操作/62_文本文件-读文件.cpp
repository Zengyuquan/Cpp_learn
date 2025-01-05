#include <iostream>
using namespace std;
#include <fstream>

void test01()
{
    ifstream ifs;

    ifs.open("text.txt", ios::in);

    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }

    // 第一种
//    char buf[1024] = {0};
//    while(ifs >> buf)
//    {
//        cout << buf << endl;
//    }

    // 第二种
//    char buf[1024] = {0};
//    while( ifs.getline(buf, sizeof(buf)))
//    {
//        cout << buf << endl;
//    }

    // 第三种
    string buf;
    while(getline(ifs, buf))
    {
        cout << buf << endl;
    }


    ifs.close();
}

int main()
{
    test01();

    return 0;
}