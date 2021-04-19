// created by Pi on 19/4/2021
// Fibnacci plus  O(n) O(1)

#include <iostream>
using namespace std;


long long fibI(int n)
{
    long long f = 0, g = 1;   // fib(0)=0, fib(1)=1
    while(0 < n--) { g += f; f = g - f; }
    return f; 
}


int main()
{
	int num;

	cout << "Please enter a number:";
	cin >> num;
	cout << "You get the Fibnacci f(" << num << ") = " << fibI(num) << endl;

	return 0;
}