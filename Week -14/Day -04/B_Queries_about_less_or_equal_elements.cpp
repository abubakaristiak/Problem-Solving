/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-08 || 12:38:22
 * * * * File    : B_Queries_about_less_or_equal_elements.cpp
*/


// https://codeforces.com/problemset/problem/600/B


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
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n,m; cin >> n >> m;
    pbds<int> a,b;
    for(int i=1; i<=n; i++){
        int x; cin >> x;
        a.insert(x);
    }

    for(int i=1; i<=m; i++){
        int x; cin >> x;
        b.insert(x);
        int val=a.order_of_key(x+1);
        cout << val << " ";
    }
    cout << endl;

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