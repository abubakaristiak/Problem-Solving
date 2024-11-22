/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-22 || 19:12:38
 * * * * File    : C_Assembly_via_Minimums.cpp
 */


// https://codeforces.com/problemset/problem/1857/C
// Problem I;


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
        int origin=(n*(n-1))/2;
        vector<int> v(origin);
        for(int i=0; i<origin; i++){
            cin >> v[i];
        }
        asort(v);
        vector<int> a;
        int last=0;
        for(int i=1; i<n; i++){
            a.push_back(v[last]);
            last+=(n-i);
        }
        a.push_back(v.back());
        for(auto val:a){
            cout << val << " ";
        }
        cout << endl;

    }
    
    return 0;


// Alhamdulillah
}