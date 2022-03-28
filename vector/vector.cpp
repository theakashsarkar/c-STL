#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(7); 
    cout << v.size() << "\n";
    // cout << v[0] << " " << v[1] << " " << v[2];
    v.pop_back();
    cout << v.size() << "\n";
    v.clear();
    cout << v.size() << "\n";
    cout << "\n";
    // cout << v[0] << " " << v[1] << " " << v[2];
}