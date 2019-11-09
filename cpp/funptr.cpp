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
    int *p1 ,(*p2)[10];
    int aa[10] = {0};
    int *bb[10] = {0};
    char *str = "abc";
    //*str = 'd';
    p1 = aa;
    p2 = &aa;
    int a = 4,b = 2,c = 3;
    cout << min(a, b, c) << endl;
    cout << *p1 << endl;
    cout << p2[0] << endl;
    cout << bb + 1 << endl;
    cout << str[1] << endl;
    return 0;
}