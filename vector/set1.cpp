#include "bits/stdc++.h"
using namespace std;
int main()
{
	set<int> s;
	s.insert(4);
	s.insert(1);
	s.insert(10);
	s.insert(3);
	s.erase(s.begin());
	// cout << *s.begin();
	s.insert(-1);
	cout << *s.begin();
}