/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-28 || 23:41:38
 * * * * File    : A_Mainak_and_Array.cpp
 */


// https://codeforces.com/problemset/problem/1726/A



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
    vector<int> v(n);
    for(int i=0; i<n ;i++){
        cin >> v[i];
    }

    int ans = v[n-1]-v[0];
    for(int i=1; i<n; i++){
        ans = max(ans, v[i]-v[0]);
    }

    for(int i=0; i<n-1; i++){
        ans = max(ans, v[n-1]-v[i]);
    }

    for(int i=1; i<n; i++){
        ans = max(ans, v[i-1]-v[i]);
    }

    cout << ans << endl;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;


// Alhamdulillah
}