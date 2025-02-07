/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-06 || 10:57:07
 * * * * File    : C_Two_TVs.cpp
 */


// https://codeforces.com/problemset/problem/845/C


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
    int q; cin >> q;
    map<int, int> diff;
    while (q--)
    {
        int l,r; cin >> l >> r;
        diff[l]++;
        diff[r+1]--;
    }

    ll sum=0;
    bool flag=true;
    for(auto [key,val]:diff){
        sum+=val;
        if(sum>2){
            flag=false;
            break;
        }
    }
    if(flag){
        yes;
    }else no;
    
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