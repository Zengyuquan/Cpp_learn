#include <iostream>
using namespace std;

// 交换函数模板
template<class T>
void mySwap(T &a, T&b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<class T>
void mySort(T arr[], int len)
{
    for(int i = 0; i < len; i++)
    {
        int max = i;
        for (int j = i + 1; j < len; j++) {
            if(arr[max] < arr[j])
            {
                max = j;
            }
        }
        if( max != i)
        {
            mySwap(arr[max], arr[i]);
        }
    }
}

template<class T>
void printArray(T arr[], int len)
{
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test01()
{
    char charArr[] = "badcfe";
    int num = sizeof(charArr) / sizeof(char);
    mySort(charArr, num);
    printArray(charArr, num);
}

void test02()
{
    int intArray[] = {2,4,3,6,5,1};
    int num = sizeof(intArray) / sizeof(int);
    mySort(intArray, num);
    printArray(intArray, num);
}

int main()
{
    test01();
    test02();

    return 0;
}