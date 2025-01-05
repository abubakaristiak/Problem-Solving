/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-05 || 08:40:24
 * * * * File    : E_Eating_Queries.cpp
 */


// https://codeforces.com/problemset/problem/1676/E
// Problem 04



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
    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        vector<int> v(n), prefixSum(n+1);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        rsort(v);
        for(int i=1; i<=n; i++){
            prefixSum[i]=prefixSum[i-1]+v[i-1];
        }
        while (k--)
        {
            int x; cin >> x;
            int ans=-1;
            auto it = lower_bound(prefixSum.begin(), prefixSum.end(), x);
            if(it != prefixSum.end()){
                ans = it-prefixSum.begin();
            }
            cout << ans << endl;
        }
        
    }
    
    return 0;


// Alhamdulillah
}