/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-22 || 00:09:45
 * * * * File    : _02_smallest_prime_factor.cpp
 */




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
    int n; cin >> n;
    map<int, int> mp;
    for(int i=2; i*i<=n; i++){
        while (n%i==0)
        {
            mp[i]++;
            n/=i;
        }
    }
    if(n>1){
        mp[n]++;
    }
    for(auto [x,y]:mp){
        cout << x << " -> " << y << endl;
    }
}


int main()
{
    fast();
    solve();

    return 0;


// Alhamdulillah
}