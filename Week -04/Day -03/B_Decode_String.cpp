/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-19 || 18:11:16
 * * * * File    : B_Decode_String.cpp
 */


// https://codeforces.com/problemset/problem/1729/B
// Problem G;



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
        string res="";

        for(int i=0; i<n; i++){
            if((i+2<n && s[i+2]=='0') && (i+3>=n || s[i+3]!='0')){
                int num=((s[i]-'0')*10)+(s[i+1]-'0');
                res.push_back((char)(num+96));
                i+=2;
            }else{
                int num=(s[i]-'0');
                res.push_back((char)(num+96));
            }
        }
        cout << res << endl;
    }
    
    return 0;


// Alhamdulillah
}