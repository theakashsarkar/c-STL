#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str, int L , int R)
{
	if(L >= R)
	{
		return true;
	}
	return (str[L] == str[R]) && isPalindrome(str, L+1, L-1);
}
long long  fib(int n)
{
	if(n < 2) return n;
	return fib(n - 1) + fib(n - 2);
}
void solveHonoi(char src, char intr, char dis, int n)
{
	if( n == 0)
	{
		return;
	}
	solveHonoi(src, intr, dis, n - 1);
	cout << src << " -> " << dis << "\n";
	solveHonoi(intr, src, dis, n - 1); 
}
int main()
{
	// string str;
	// cin >> str;
	// cout << isPalindrome(str, 0, str.size() - 1);
	// cout << fib(45);
	solveHonoi('A', 'B', 'C', 3);
	return 0;
}