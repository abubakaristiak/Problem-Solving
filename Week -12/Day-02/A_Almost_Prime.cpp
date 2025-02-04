/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-04 || 12:03:35
 * * * * File    : A_Almost_Prime.cpp
 */

// https://codeforces.com/problemset/problem/26/A


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
    vector<int> prime(n+1, 0);
    for(int i=2; i<=n; i++){
        if(prime[i]==0){
            for(int j=i; j<=n; j+=i){
                prime[j]++;
            }
        }
    }

    int cnt=0;
    for(int i=1; i<=n; i++){
        if(prime[i]==2){
            cnt++;
        }
    }
    cout << cnt << endl;
    cout << endl;
}


int main()
{
    fast();
    int t=1;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}