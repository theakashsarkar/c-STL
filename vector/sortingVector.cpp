#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v = {5,4,3,2,1};
	sort(v.begin(), v.end());
	for(int i = 0; i < 4; i++)
	{
		cout << v[i] << " ";
	}
}