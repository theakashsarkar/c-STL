#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int> s;
	s.insert(10);
	s.insert(15);
	cout << s.count(10) << "\n";
	s.erase(10);
	cout << s.count(10) << "\n";
	s.insert(10);
	cout << s.count(10) << "\n";
}