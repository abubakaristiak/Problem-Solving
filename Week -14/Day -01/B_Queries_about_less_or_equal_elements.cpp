/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-05 || 23:35:54
 * * * * File    : B_Queries_about_less_or_equal_elements.cpp
 */


// https://codeforces.com/problemset/problem/600/B


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
    int n,m; cin >> n >> m;
    vector<int>v(n);
    for(int &val:v){
        cin >> val;
    }
    asort(v);
    for(int i=0; i<m; i++){
        int x; cin >> x;
        cout << upper_bound(v.begin(), v.end(),x)-v.begin() << " ";
    }
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