/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-07 || 12:55:56
 * * * * File    : D_Pair_of_Topics.cpp
 */

// https://codeforces.com/problemset/problem/1324/D


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
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    vector<ll> b(n);
    for(ll i=0; i<n; i++){
        cin >> b[i];
    }

    vector<ll> diff(n);
    for(int i=0; i<n; i++){
        diff[i]=a[i]-b[i];
    }
    asort(diff);

    ll cnt=0;
    for(ll i=0; i<n; i++){
        if(diff[i]>0){
            cnt+=(n-1)-i;
        }else{
            int idx=upper_bound(diff.begin(), diff.end(), -diff[i])-diff.begin();
            cnt+=(n-idx);
        }
    }
    cout << cnt << endl;


}


int main()
{
    fast();
    ll t=1;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}