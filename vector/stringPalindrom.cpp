#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str, rstr;
	cin >> str;
	rstr = str;
	reverse(rstr.begin(), rstr.end());
	if(rstr == str)
	{
		cout << "Palindrome\n";
	}
	else{
		cout << "Not Palindrome\n";
	}
	// cout << s << endl;
	return 0;
}