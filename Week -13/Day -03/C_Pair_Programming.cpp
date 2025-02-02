/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-02 || 11:53:07
 * * * * File    : C_Pair_Programming.cpp
 */



// https://codeforces.com/problemset/problem/1547/C




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
    ll lines,n,m; cin >> lines >> n >> m;
    vector<ll> v1, v2;

    
    for(ll i=1; i<=n; i++){
        ll val; cin >> val;
        v1.push_back(val);
    }
    for(ll i=1; i<=m; i++){
        ll val; cin >> val;
        v2.push_back(val);
    }

    ll p1=0, p2=0, files=lines;
    bool track=false;
    vector<ll> ans;
    while (n>p1 || m>p2)
    {
        if(v1[p1]==0 && p1<n){
            ans.push_back(0);
            p1++;
            files++;
        }
        else if(v2[p2]==0 && p2<m){
            ans.push_back(0);
            p2++;
            files++;
        }
        else if(v1[p1]<=files && v1[p1]!=0  && p1<n){
            ans.push_back(v1[p1]);
            p1++;
        }
        else if(v2[p2]<=files && v2[p2]!=0 && p2<m){
            ans.push_back(v2[p2]);
            p2++;
        }
        else{
            track=true;
            break;
        }
    }
    if(track){
        cout << -1 << endl;
    }else{
        for(int val:ans){
            cout << val << " ";
        }
        cout << endl;
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