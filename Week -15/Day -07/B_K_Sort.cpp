/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-08 || 01:15:34
 * * * * File    : B_K_Sort.cpp
*/


// https://codeforces.com/problemset/problem/1987/B


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
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }

    ll ans=0, mx=0;
    for(ll i=1; i<n; i++){
        if(v[i]<v[i-1]){
            ll cur=v[i-1]-v[i];
            ans+=cur;
            mx=max(mx, cur);
            v[i]=v[i-1];
        }
    }
    ans+=mx;
    cout << ans << endl;
}


int main()
{
    fast();
    ll t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}