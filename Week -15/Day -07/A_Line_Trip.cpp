/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-07 || 20:15:36
 * * * * File    : A_Line_Trip.cpp
*/


// https://codeforces.com/problemset/problem/1901/A


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n,x; cin >> n >> x;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int mx=INT_MIN;
    for(int i=1; i<n; i++){
        int diff=v[i]-v[i-1];
        mx=max(mx, diff);
    }

    mx=max(mx, v[0]-0);
    mx=max(mx, 2*(x-v[n-1]));
    cout << mx << endl;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}