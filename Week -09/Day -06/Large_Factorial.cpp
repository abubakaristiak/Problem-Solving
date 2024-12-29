/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-29 || 10:32:02
 * * * * File    : Large_Factorial.cpp
 */


// https://www.codechef.com/problems/FUM
// Problem 05


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

int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int ans=1;
        for(int i=1; i<=n; i++){
            ans=(1LL * ans%MOD * i%MOD) % MOD;
        }
        cout << ans << endl;
    }
    
    return 0;

// Alhamdulillah
}