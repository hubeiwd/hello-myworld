#include <iostream>
#include "stdlib.h"
using namespace std;

#define MAX_SIZE 10

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int arr[MAX_SIZE];
    int n = 0;

    for ( ;cin >> arr[n] ;n++)
    {
        ;
    }
    qsort(arr, n, sizeof(int), cmp);
    for (int i = 0;i < n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}