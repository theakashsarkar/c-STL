#include<bits/stdc++.h>
using namespace std;

int get_factorial(int n)
{
	//base case
	if (n == 0)
	{
		return 1;
	}
	return n * get_factorial(n-1);
}

int main()
{
	cout << get_factorial(10) << endl;
	return 0;
}
