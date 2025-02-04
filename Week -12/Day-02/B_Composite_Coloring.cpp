/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-04 || 11:34:45
 * * * * File    : B_Composite_Coloring.cpp
 */

// https://codeforces.com/problemset/problem/1332/B


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

vector<ll> all_prime = { 2,3, 5 ,7 ,11, 13, 17, 19, 23, 29, 31 };
void solve()
{
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }

    map<int, vector<ll>> mp;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<11; j++){
            if(v[i]%all_prime[j]==0){
                mp[all_prime[j]].push_back(i);
                break;
            }
        }
    }

    vector<ll> ans(n);
    ll color=1;
    for(auto [x,y]:mp){
        for(auto pos:y){
            ans[pos]=color;
        }
        color++;
    }


    cout << mp.size() << endl;
    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
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