/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-21 || 10:49:46
 * * * * File    : D_Districts_Connection.cpp
*/


// https://codeforces.com/problemset/problem/1433/D


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
    int n; cin >> n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++){
        cin >> v[i];
    }

    bool flag=false;
    for(int i=1; i<=n; i++){
        if(v[1]!=v[i]){
            flag=true;
            break;
        }
    }
    if(flag){
        yes;
        int city=-1;
        for(int i=2; i<=n; i++){
            if(v[1] != v[i]){
                cout << 1 << " " << i << endl;
                city=i;
            }
        }
        for(int i=2; i<=n; i++){
            if(v[i]==v[1]){
                cout << city << " " << i << endl;
            }
        }
    }else{
        no;
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