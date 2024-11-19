/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-19 || 18:31:16
 * * * * File    : A_Payment_Without_Change.cpp
 */

// https://codeforces.com/problemset/problem/1256/A
// Problem D;


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    int  t; cin >> t;
    while (t--)
    {
        ll a,b,n,s;
        cin >> a >> b >> n >> s;
        ll sum = a*n+b*1;
        ll x=s%n;
        if(x<=b && sum>=s)yes;
        else no;
    }
    
    return 0;


// Alhamdulillah
}