/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-28 || 10:45:33
 * * * * File    : C_Paint_the_Array.cpp
 */


// https://codeforces.com/problemset/problem/1618/C
// Problem 02



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

        ll G1=0, G2=0;
        for(ll i=0; i<n; i+=2){
            G1=__gcd(G1, v[i]);
        }

        for(ll i=1; i<n; i+=2){
            G2=__gcd(G2, v[i]);
        }

        ll ans=0;
        bool flag=true;
        for(ll i=1; i<n; i+=2){
            if(v[i]%G1==0){
                flag=false;
            }
        }

        if(flag){
            ans=G1;
        }
        else{
            flag=true;
            for(ll i=0; i<n; i+=2){
                if(v[i]%G2==0){
                    flag=false;
                }
            }
            if(flag){
                ans=G2;
            }
        }

        cout << ans << endl;
    }
    
    return 0;


// Alhamdulillah
}