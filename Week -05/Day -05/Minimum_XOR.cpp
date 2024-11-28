/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-28 || 11:10:32
 * * * * File    : Minimum_XOR.cpp
 */


// https://www.codechef.com/problems/MINMXOR
// Problem 2;


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
        int Xor=0;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            Xor^=v[i];
        }
        int ans=Xor;
        for(int i=0; i<n; i++){
            int curXor=Xor^v[i];
            ans=min(ans, curXor);
        }
        cout << ans << endl;
    }
    
    return 0;


// Alhamdulillah
}