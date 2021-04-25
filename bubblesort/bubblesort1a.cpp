// created by Pi on 24/4/2021
// 冒泡排序，借助sorted可以及时退出，不总是扫描n-1次

#include <iostream>
using namespace std;

#define foo(arr) sizeof(arr)/sizeof(arr[0])

void bubblesort1A(int A[], int n)
{
	int cmp = 0, swp = 0;
	bool sorted = false;    // 整体排序标志，首先假定尚未排序
    
    while (!sorted)    // 整体排序标志，首先假定尚未排序
    {
    	sorted = true;    // 整体排序标志，首先假定尚未排序 

    	for (int i = 1; i < n; i++)
    	{
    		if (A[i - 1] > A[i])
    		{
    			swap(A[i - 1], A[i]);
    			sorted = false;    // 因整体排序不能保证，需要清除排序标志
    			swp++;
    		}
            cmp++;
    	}
    	n--;
    }

    cout << "#comparison:" << cmp << "  " << "#swap:" << swp << endl;
}


int main() 
{
    int A[] = {0, 3, 5, 3, 1, 8, 9, 6};
    int num = foo(A);
    
    for (auto p = begin(A); p != end(A); p++)
    	cout << *p << " ";
    cout << endl;

    bubblesort1A(A, num);

    for (auto p = begin(A); p != end(A); p++)
    	cout << *p << " ";
    cout << endl;

    return 0;
}

