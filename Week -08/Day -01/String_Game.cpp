/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-17 || 18:38:21
 * * * * File    : String_Game.cpp
 */


// https://www.codechef.com/problems/STRAME
// Problem A;

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
        string s; cin >> s;
        int cnt_one=0, cnt_zero=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                cnt_one++;
            }else cnt_zero++;
        }

        int min_pair=min(cnt_one, cnt_zero);
        if(min_pair%2==0){
            cout << "Ramos" << endl;
        }else cout << "Zlatan" << endl;
    }
    
    return 0;


// Alhamdulillah
}