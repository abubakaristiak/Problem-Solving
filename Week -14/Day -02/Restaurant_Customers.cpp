/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-06 || 12:38:08
 * * * * File    : Restaurant_Customers.cpp
 */


// https://cses.fi/problemset/task/1619


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;


void solve()
{
    int n; cin >> n;
    map<int, int> diff;
    while (n--)
    {
        int l,r; cin >> l >> r;
        diff[l]++;
        diff[r+1]--;
        
    }

    int cur=0, mx=0;
    for(auto it:diff){
        cur+=it.second;
        mx=max(cur, mx);
    }
    cout << mx << endl;
}


int main()
{
    fast();
    int t=1;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}