/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * User    : abubakaristiak
 * * * * Created : 2024-11-10 || 12:17:25
 * * * * File    : D_Matryoshkas.cpp
 */
 
// https://codeforces.com/problemset/problem/1790/D
// Problem 14;

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
        ll n; cin >> n;
        vector<ll> v(n);
        map<ll, ll> mp;
        for(int i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        asort(v);
        int cnt=0;
        for(int i=0; i<n; i++){
            int val=v[i];
            if(mp[v[i]]!=0){
                cnt++;
                while (mp[val]>0)
                {
                    mp[val]--;
                    val++;
                }
                
            }
        }
        cout << cnt << endl;
    }
        
    return 0;
}
