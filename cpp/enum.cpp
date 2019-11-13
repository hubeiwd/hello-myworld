#include <iostream>
using namespace std;
template<typename T>

T min(T a,T b,T c)
{
    if(a > b)
    a = b;
    if(a > c)
    a = c;
    return a;
}

struct student{
    int num;
    char name[20];
};

int main()
{
    int a = 4,b = 2,c = 3;
    int (*ptr)(int x, int y, int z);
    ptr = &min;
    cout << (*ptr)(a, b, c) << endl;
    return 0;
}