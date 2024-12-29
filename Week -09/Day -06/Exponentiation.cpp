/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-29 || 11:06:40
 * * * * File    : Exponentiation.cpp
 */



// https://cses.fi/problemset/task/1095
// Problem 06


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
const int MOD=1e9+7;

int power(int x, int n){
    int ans=1%MOD;
    while (n)
    {
        if(n & 1){
            ans=(1LL * ans%MOD * x%MOD) % MOD;
        }
        x = 1LL * x*x % MOD;
        n>>=1;
    }
    return ans;
    
}
int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        int x,n; cin >> x >> n;
        cout << power(x,n) << endl;
    }
    
    return 0;


// Alhamdulillah
}