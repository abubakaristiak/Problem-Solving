/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-08 || 17:03:16
 * * * * File    : F_Longest_Strike.cpp
 */



// https://codeforces.com/problemset/problem/1676/F
// Problem G;


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
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        asort(v);
        map<int, int> mp;
        for(int x:v){
            mp[x]++;
        }

        int left=-1, right=-1;
        int l=-1, r;
        for(int i=0; i<n; i++){
            if(mp[v[i]]<k){
                continue;
            }
            if(l==-1){
                l=v[i];
            }
            if(i==n-1 || v[i+1]-v[i]>1|| mp[v[i+1]]<k){
                r=v[i];
                if(r-l>right-left || left==-1){
                    left=l;
                    right=r;
                }
                l=-1;

            }
        }
        if(left==-1){
            cout << -1 << endl;
        }else{
            cout << left << " " << right << endl;
        }
    }
    
    return 0;
// Alhamdulillah
}



