/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-25 || 14:47:31
 * * * * File    : A_Question_Marks.cpp
 */
 
 
 
// https://codeforces.com/problemset/problem/1993/A
// Problem B;
 
 
 
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
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
 
        map<char, int> mp;
        for(auto ch:s){
            if(ch!='?'){
                mp[ch-'A']++;
            }
        }
 
        int res=0;
        for(int i=0; i<mp.size(); i++){
            res+=min(n, mp[i]);
        }
        cout << res << endl;
    }
    
    return 0;
 
 
// Alhamdulillah
}