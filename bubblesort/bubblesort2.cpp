// created by Pi on 24/4/2021
// 冒泡排序，借助整数m尽快地收缩待排序区间：既可提前退出，更可减少每趟（及所有）扫描交换中元素比较操作
// 对尾部有序（或接近有序）的输入，算法收敛的速度大大提高

#include <iostream>
using namespace std;

#define foo(arr) sizeof(arr)/sizeof(arr[0])

void bubblesort2(int A[], int n) 
{ 
   int cmp = 0, swp = 0;

   for (int m; 1 < n; n = m)    // 在尚未确认已全局排序之前，逐趟进行扫描交换
   { 
      for (int i = m = 1; i < n; i++)    // 自左向右逐对检查当前范围A[0, m)内的各相邻元素
      { 
         if ( A[i - 1] > A[i] )    // 一旦A[i-1]与A[i]逆序，则交换
         { 
            swap ( A[i - 1], A[i] ); 
            m = i;    // 更新待排序区间的长度。当m=1时，外循环退出
            swp++;    // 说实话，让我直接写一个冒泡程序的话，我肯定不会写这个
         }
         cmp++;
      }
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

    bubblesort2(A, num);

    for (auto p = begin(A); p != end(A); p++)
      cout << *p << " ";
    cout << endl;

    return 0;
}
