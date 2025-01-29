/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-29 || 23:28:47
 * * * * File    : B_Prefiquence.cpp
 */


// https://codeforces.com/problemset/problem/1968/B


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
    string s1, s2; cin >> s1 >> s2;

    int idx=0, cnt=0;
    for(int i=0; i<s2.size(); i++){
        if(s1[idx]==s2[i]){
            cnt++;
            idx++;
        }
    }
    cout << cnt << endl;
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