// created by Pi on 24/4/2021
// 冒泡排序，借助布尔型标志位sorted，可及时提前退出，而不致蛮力地做n-1趟扫描交换
// 对尾部有序（或接近有序）的输入，算法依然亦步亦趋地收敛，导致元素比较次数过多

#ifdef BUBBLESORT1B_H
#define BUBBLESORT1B_H


#include <iostream>

void bubblesort1B(int A[], int n)    // 起泡排序算法（版本1B，与版本1A完全等价）：0 <= n
{
	int cmp = 0, swp = 0;

	for (bool sorted = false; sorted = !sorted; n--)    // 在尚未确认已全局排序之前，逐趟进行扫描交换
	{
		for (int i = 1; i < n; i++)
		{
			if (A[i - 1] > A[i])    // 一旦A[i-1]与A[i]逆序，则交换
			{
				swap(A[i - 1], A[i]);
				sorted = false;    // 因整体排序不能保证，需要清除排序标志
				swp++;
				std::cout << n << ":" std::endl;
				std::cout << A << " " << n << " " << i - 1 << i + 1 << std::endl;
			}
			cmp++;
		}   
	}

	std::cout << "#comparison:" << cmp << "  " << "#swap:" << swp << std::endl;
}

#endif