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

int main()
{
    int a = 4,b = 2,c = 3;
    cout << min(a, b, c) <<endl;
    return 0;
}