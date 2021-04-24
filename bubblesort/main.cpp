// created by Pi on 21/4/2021
// 比较不同的冒泡排序

#define foo(arr) sizeof(arr)/sizeof(arr[0])

#include <iostream>
using namespace std;

#include "bubblesort.h"
#include "bubblesort1a.h"
#include "bubblesort1b.h"
#include "bubblesort2.h"



int main() 
{
    int A[] = {0, 3, 5, 3, 1, 8, 9, 6};
    int num = foo(A);

    cout << A << endl;

    bubblesort(A, num);
    bubblesort1A(A, num);
    bubblesort1B(A, num);

    return 0;
}