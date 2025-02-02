/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-02 || 12:39:20
 * * * * File    : C_Boats_Competition.cpp
 */



// https://codeforces.com/problemset/problem/1399/C



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
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }

    asort(v);
    ll ans=0;
    for(ll weight=1; weight<=100; weight++){
        ll cnt=0, i=0, j=n-1;
        while (i<j)
        {
            ll sum=v[i]+v[j];
            if(sum==weight){
                cnt++;
                i++, j--;
            }else if(sum>weight){
                j--;
            }else{
                i++;
            }
            ans=max(cnt, ans);
        }        
    }
    cout << ans << endl;
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