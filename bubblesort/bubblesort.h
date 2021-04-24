// created by Pi on 24/4/2021
// 冒泡排序，从小到大，蛮力算法，扫描n-1次

#ifndef BUBBLESORT_H
#define BUBBLESORT_H


#include <iostream>

void bubblesort(int A[], int n)
{
	int cmp = 0, swp = 0;

	while (n--)    // 在尚未确认已全局排序之前，逐趟进行扫描交换
	{
		for (int i = 0; i < n; i++)  // 自左向右逐对检查当前范围A[0, n)内的各相邻元素
		{
			if (A[i] > A[i+1])  // 将最大的元素放到最后面
			{
				swap(A[i], A[i+1]);  // 一旦A[i]与A[i+1]逆序，交换之
				swp++;
				std::cout << n << ":" << std::endl;
				std::cout << A << " " << n << " " << i << " " << i + 2 << std::endl;
			}
			cmp++;
		}
	}

	std::cout << "#comparison:" << cmp << "  " << "#swap:" << swp << std::endl;
}   // 蛮力算法，不能及时推出，必须做n-1次扫描


#endif