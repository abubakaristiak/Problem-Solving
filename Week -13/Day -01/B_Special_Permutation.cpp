/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-29 || 12:38:43
 * * * * File    : B_Special_Permutation.cpp
 */



// https://codeforces.com/problemset/problem/1612/B



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
    int n,a,b; cin >> n >> a >> b;
    if((a==n/2+1 && b==n/2) || (a<=n/2 && b>=n/2+1)){
        cout << a << " ";
        for(int i=n; i>=1; i--){
            if(i!=a && i!=b){
                cout << i << " ";
            }
        }
        cout << b;
    }else{
        cout << -1;
    }
    cout << endl;
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