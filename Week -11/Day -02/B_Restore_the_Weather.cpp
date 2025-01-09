/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-09 || 18:56:13
 * * * * File    : B_Restore_the_Weather.cpp
 */


// https://codeforces.com/problemset/problem/1833/B



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
        int n,k; cin >> n >> k;
        vector<pair<int, int>> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i].first;
            a[i].second=i;
        }
        asort(a);

        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        asort(b);

        vector<int> res(n);
        for(int i=0; i<n; i++){
            res[a[i].second]=b[i];
        }

        for(auto val:res){
            cout << val << " ";
        }

        cout << endl;


    }
    
    return 0;


// Alhamdulillah
}