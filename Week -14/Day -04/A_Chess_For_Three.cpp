/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-08 || 20:58:14
 * * * * File    : A_Chess_For_Three.cpp
*/


// https://codeforces.com/problemset/problem/1973/A


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
using namespace std;

using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    if((a[0]+a[1]+a[2])%2!=0){
        cout << -1 << endl;
    }else if(a[0]+a[1]<a[2]){
        cout << a[0]+a[1] << endl;
    }else {
        cout << ((a[0]+a[1]+a[2])/2) << endl;
    }
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