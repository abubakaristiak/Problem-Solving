/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-01 || 11:38:39
 * * * * File    : B_Prefix_Sum_Addicts.cpp
 */


// https://codeforces.com/problemset/problem/1738/B
// Problem k;


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    ll t; cin >> t;
    while (t--)
    {
        ll n,k;; cin >> n >> k;
        vector<ll> s(n+1, 0);
        for(ll i=n-k+1; i<=n; i++){
            cin >> s[i];
        }
        vector<ll> a(n+1);
        if(n==1 || k==1){
            yes;
            continue;
        }

        for(ll i=n; i>=n-k+2; i--){
            a[i]=s[i]-s[i-1];
        }

        bool track=true;
        for(ll i=n-k+2; i<=n; i++){
            if(i+1<=n && a[i+1]<a[i]){
                track=false;
                break;
            }
        }
        if(!track){
            no;
            continue;
        }
        for(ll i=n-k+1; i>1; i--){
            a[i]=a[i+1];
            s[i-1]=s[i]-a[i];
        }
        a[1]=s[1];
        for(ll i=1; i<=n; i++){
            if(i+1<=n && a[i+1]<a[i]){
                track=false;
                break;
            }
        }
        if(track) yes;
        else no;

    }
    
    return 0;


// Alhamdulillah
}



