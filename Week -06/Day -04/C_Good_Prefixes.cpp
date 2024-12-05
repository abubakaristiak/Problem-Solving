/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-05 || 12:24:29
 * * * * File    : C_Good_Prefixes.cpp
 */


// https://codeforces.com/problemset/problem/1985/C
// Problem F;



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
        int n; cin >> n;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        ll mx=-1, totalSum=0, cnt=0;
        for(int i=0; i<n; i++){
            mx=max(mx, v[i]);
            totalSum+=v[i];
            if(totalSum-mx==mx){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    
    return 0;


// Alhamdulillah
}