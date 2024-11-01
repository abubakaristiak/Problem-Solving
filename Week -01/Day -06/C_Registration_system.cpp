//https://codeforces.com/contest/4/problem/C
//Problem 7

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    map<string, int> mp;
    while (t--)
    {
        string s; cin >> s;
        if(mp[s]==0){
            mp[s]=1;
            cout << "OK" << endl;
        }else{
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }
    
    return 0;
}