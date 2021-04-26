// created by Pi on 19/4/2021
// Fibnacci  O(n) O(n)

#include <iostream>
using namespace std;


long long fib(int n, long long& prev)
{
    if (n == 0)	//n=0，即递归基态，记 fib(-1)=1, fib(0)=0
    {
        prev = 1;
        return 0;
    }
    else //记prevprev为前前项，prev为前一项
    {
        long long prevprev;	//当前的prevprev作为下一次递归调用时的prev参数
        prev = fib(n - 1, prevprev); //下一次递归返回值作为当前的prev
        return prevprev + prev; //返回前两项之和
    }
}


int main()
{
	int num;
	long long p;

	cout << "Please enter a number:";
	cin >> num;
	cout << "You get the Fibnacci f(" << num << ") = " << fib(num, p) << endl;

	return 0;
}



