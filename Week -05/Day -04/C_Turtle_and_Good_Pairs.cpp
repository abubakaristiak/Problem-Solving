/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-27 || 19:15:45
 * * * * File    : C_Turtle_and_Good_Pairs.cpp
 */


// https://codeforces.com/problemset/problem/2003/C
// Problem J;


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
        string s; cin >> s;
        vector<pair<int, char>> fre(26);
        for(int i=0; i<26; i++){
            fre[i].second='a'+i;
        }
        for(char c:s){
            fre[c-'a'].first++;
        }
        rsort(fre);
        string res(n,' ');
        int idx=0;
        for(auto [cnt, ch]:fre){
            if(cnt==0){
                break;
            }
            for(int i=0; i<cnt; i++){
                if(idx>=n){
                    idx=1;
                }
                res[idx]=ch;
                idx+=2;
            }
        }
        cout << res << endl;
    }
    return 0;


// Alhamdulillah
}


