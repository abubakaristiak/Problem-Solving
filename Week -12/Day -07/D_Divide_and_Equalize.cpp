/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-26 || 19:21:36
 * * * * File    : D_Divide_and_Equalize.cpp
 */


// https://codeforces.com/problemset/problem/1881/D



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
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    map<int, int> cnt;
    for(int i=0; i<n; i++){
        for(int j=2; j*j<=v[i]; j++){
            if(v[i]%j==0){
                while (v[i]%j==0)
                {
                    cnt[j]++;
                    v[i]/=j;
                }
            }
        }
        if(v[i]>1){
            cnt[v[i]]++;
        }
    }


    bool flag = true;
    for(auto [x,y]:cnt){
        if(y%n != 0){
            flag=false;
            break;
        }
    }

    if(flag){
        yes;
    }else no;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;


// Alhamdulillah
}

