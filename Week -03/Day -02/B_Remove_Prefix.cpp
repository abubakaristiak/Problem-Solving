/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-11 || 19:37:53
 * * * * File    : B_Remove_Prefix.cpp
 */

// https://codeforces.com/problemset/problem/1714/B
// Problem F;


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
        vector<int> v(n);
        map<int, int> mp;
        
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int unique=0;
        for(int i=n-1; i>=0; i--){
            if(mp[v[i]]==0){
                unique++;
            }else break;
            mp[v[i]]++;
        }
        int del_element = n-unique;
        cout << del_element << endl;

    }
    
    return 0;
}