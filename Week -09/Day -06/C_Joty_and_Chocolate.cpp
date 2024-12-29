/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-29 || 08:25:12
 * * * * File    : C_Joty_and_Chocolate.cpp
 */


// https://codeforces.com/problemset/problem/678/C
// Problem 03

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

ll GCD(ll a, ll b){
    return __gcd(a,b);
}

ll LCM(ll a, ll b){
    return (a/__gcd(a,b)*b);
}


int main()
{
    fast();
    ll n,a,b,p,q; cin >> n >> a >> b >> p >> q;

    ll x=(n/a)*p, y=(n/b)*q, overlap=(n/LCM(a,b));
    ll ans=((x+y)-(overlap*(p+q))) + (overlap*max(p,q));
    cout << ans << endl;
      
    return 0;


// Alhamdulillah
}