/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-16 || 16:36:29
 * * * * File    : B_Long_Long.cpp
 */

// https://codeforces.com/problemset/problem/1843/B
// Problem 09;


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
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        ll sum=0, cnt=0;
        bool flag=false;

        for(int i=0; i<=n; i++){
            if(i<n){
                sum+=abs(v[i]);
            }
            if(flag){
                if(i==n || v[i]>0){
                    cnt++;
                    flag=false;
                }
            }else{
                if(v[i]<0){
                    flag=true;
                }
            }
        }
        cout << sum << " " << cnt << endl;
    }
    
    return 0;
}