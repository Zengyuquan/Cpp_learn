#include <iostream>
using namespace std;

class CPU
{
public:
    virtual void Calculate() = 0;
};

class VideoCard
{
public:
    virtual void Display() = 0;
};

class Memory
{
public:
    virtual void Storage() = 0;
};

class Computer
{
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *men)
    {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = men;
    }

    void work()
    {
        m_cpu->Calculate();
        m_vc->Display();
        m_mem->Storage();
    }

    ~Computer()
    {
        if (m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        if (m_vc != NULL)
        {
            delete m_vc;
            m_vc = NULL;
        }
        if (m_mem != NULL)
        {
            delete m_mem;
            m_mem = NULL;
        }
    }
private:
    CPU *m_cpu;
    VideoCard *m_vc;
    Memory *m_mem;
};

class AMDCPU:public CPU
{
public:
    void Calculate()
    {
        cout << "AMD YES!" << endl;
    }
};

class AMDGPU:public VideoCard
{
public:
    void Display()
    {
        cout << "AMD CPG YES!" << endl;
    }
};

class NVIDIA:public VideoCard
{
public:
    void Display()
    {
        cout << "NVIDIA NO!" << endl;
    }
};

class SSG:public Memory
{
public:
    void Storage()
    {
        cout << "storage!" << endl;
    }
};

void test01()
{
    CPU * amdcpu = new AMDCPU;
    VideoCard * nvidia = new NVIDIA;
    Memory * ssgmen = new SSG;

    Computer * computer1 = new Computer(amdcpu, nvidia, ssgmen);
    computer1->work();
    delete computer1;
    cout << "------------------------" << endl;
    Computer * computer2 = new Computer(new AMDCPU, new AMDGPU, new SSG);
    computer2->work();
    delete computer2;
}

int main()
{
    test01();

    return 0;
}