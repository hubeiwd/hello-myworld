#include <iostream>
using namespace std;

#define TEST(x) {x++;x++;}

#pragma pack(4)
union A{
    int a[5];
    char b;
    double c;
};
#pragma pack(8)
struct B{
    char a;
    double b;
    int c;
}test_struct_b;


int main()
{
    int x = 0, i = 1;
    if(i < 0)
        TEST(x)
    else
        i = 2;
    cout << x << endl;
    cout << sizeof(A) << endl;
    cout << sizeof(test_struct_b) << endl;
    return 0;
}
