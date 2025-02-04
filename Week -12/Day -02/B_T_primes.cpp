/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-04 || 08:51:34
 * * * * File    : B_T_primes.cpp
 */



// https://codeforces.com/problemset/problem/230/B



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

bool isPrime(ll n){
    if(n==1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool isSqrt(ll n){
    ll x=sqrtl(n);
    return (x*x)==n;
}


void solve()
{
    int n; cin >> n;
    for(int i=1; i<=n ;i++){
        ll x; cin >> x;
        if(isSqrt(x) && isPrime(sqrtl(x))){
            yes;
        }else no;
    }
}


int main()
{
    fast();
    solve();

    return 0;


// Alhamdulillah
}