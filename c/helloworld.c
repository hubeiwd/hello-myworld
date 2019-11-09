#include "stdio.h"

struct student{
    int num;
    char name[20];
};

int main()
{
    int *p1 ,(*p2)[10];
    int aa[10] = {0};
    int *bb[10] = {0};
    char *str = "abc";
    str[0] = 'd';
    p1 = aa;
    p2 = &aa;
    int a = 4,b = 2,c = 3;
    //cout << min(a, b, c) << endl;
    //cout << *p1 << endl;
    //cout << p2[0] << endl;
    ////cout << bb + 1 << endl;
    printf("the letter: %s",str);
    //cout << str[0] << endl;
    return 0;
}