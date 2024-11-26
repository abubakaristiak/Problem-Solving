/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-26 || 17:00:39
 * * * * File    : B_Mex_Master.cpp
 */


// https://codeforces.com/problemset/problem/1806/B
// Problem E;


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
        int zeros=0, mx=0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i]==0){
                zeros++;
            }
            mx=max(mx, v[i]);
        }
        if(zeros<=n-zeros+1){
            cout << 0 << endl;
        }else{
            if(mx==0){
                cout << 1 << endl;
            }else if(mx==1){
                cout << 2 << endl;
            }else cout << 1 << endl;
        }
    }
    return 0;


// Alhamdulillah
}