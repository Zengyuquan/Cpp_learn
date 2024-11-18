#include <iostream>
using namespace std;

class Person
{
public:
    Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c){}

    void printPerson()
    {
        cout << "A:" << m_A << endl;
        cout << "B:" << m_B << endl;
        cout << "C:" << m_C << endl;
    }

private:
    int m_A;
    int m_B;
    int m_C;
};


int main()
{
    Person p(30,20,10);
    p.printPerson();

    return 0;
}