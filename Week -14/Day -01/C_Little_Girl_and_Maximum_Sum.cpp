/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-05 || 08:56:03
 * * * * File    : C_Little_Girl_and_Maximum_Sum.cpp
 */


// https://codeforces.com/problemset/problem/276/C


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
    int n,q; cin >> n >> q;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<int> diff(n+1);
    while (q--)
    {
        int l,r; cin >> l >> r;
        l--,r--;
        diff[l]++; diff[r+1]--;
    }
    for(int i=1; i<=n; i++){
        diff[i]=diff[i-1]+diff[i];
    }
    rsort(v);
    rsort(diff);

    ll ans=0;
    for(int i=0; i<n; i++){
        ans+=(1LL * v[i]*diff[i]);
    }
    cout << ans << endl;
    
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