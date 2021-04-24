// created by Pi on 24/4/2021
// 冒泡排序，借助sorted可以及时退出，不总是扫描n-1次

#ifdef BUBBLESORT1A_H
#define BUBBLESORT1A_H


#include <iostream>

void bubblesort1A(int A[], int n)
{
	int cmp = 0, swp = 0;
	bool sorted = false;    // 整体排序标志，首先假定尚未排序
    
    while (!sorted)    // 整体排序标志，首先假定尚未排序
    {
    	sorted = true;    // 整体排序标志，首先假定尚未排序 

    	for (i = 1; i < n; i++)
    	{
    		if (A[i - 1] > A[i])
    		{
    			swap(A[i - 1], A[i]);
    			sorted = false;    // 因整体排序不能保证，需要清除排序标志
    			swp++;
    			std::cout << n << ":" << std::endl;
    			std::cout << A << " " << n << " " << i - 1 << " " << i + 1 << std::endl;
    		}
            cmp++;
    	}
    	n--;
    }

    std::endl << "#comparison:" << cmp << "  " << "#swap:" << swp << std::endl;
}


#endif