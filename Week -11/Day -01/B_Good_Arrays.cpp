/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-06 || 23:14:13
 * * * * File    : B_Good_Arrays.cpp
 */


// https://codeforces.com/problemset/problem/1856/B



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
    int q; cin >> q;
    while (q--)
    {
        ll n; cin >> n;
        vector<ll> v(n);
        ll sum=0, cnt=0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum+=v[i];
            if(v[i]==1){
                cnt++;
            }
        }
        if(sum-n>=cnt && n>1){
            yes;
        }else no;
    }
    
    return 0;


// Alhamdulillah
}