/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-06 || 22:47:34
 * * * * File    : B_Mark_the_Dust_Sweeper.cpp
 */


// https://codeforces.com/problemset/problem/1705/B
// Problem E;

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
int main()
{
    fast();
    ll t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
        }
        reverse(v.begin(), v.end());
        while (!v.empty() && v.back()==0)
        {
            v.pop_back();
        }
        if(v.empty()){
            cout << 0 << endl;
            continue;
        }
        reverse(v.begin(), v.end());
        ll ans=0;
        n=v.size();

        for(ll i=0; i<n-1; i++){
            if(v[i]==0){
                ans++;
            }else{
                ans+=v[i];
            }
        }
        cout << ans << endl;   
    }
    
    return 0;
// Alhamdulillah
}