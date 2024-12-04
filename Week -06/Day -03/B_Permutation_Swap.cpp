/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-04 || 23:37:23
 * * * * File    : B_Permutation_Swap.cpp
 */


// https://codeforces.com/problemset/problem/1828/B
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
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int ans=0;
        vector<int> v(n+1);
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }
        for(int i=1; i<=n; i++){
            ans=__gcd(ans, abs(v[i]-i));
        }
        cout << ans << endl;


    }
    
    return 0;


// Alhamdulillah
}