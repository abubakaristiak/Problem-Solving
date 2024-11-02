//https://codeforces.com/contest/903/problem/C
//Problem 13

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,a; cin >> n;
    map<int, int> mp;

    for(int i=0; i<n; i++){
        cin >> a;
        mp[a]++;
    }
    int mx = 0;
    for(auto &it : mp) {
        mx=max(mx, it.second);
    }
    cout << mx << endl;
    return 0;
}