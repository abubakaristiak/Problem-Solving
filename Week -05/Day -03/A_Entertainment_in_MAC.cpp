/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-26 || 23:20:22
 * * * * File    : A_Entertainment_in_MAC.cpp
 */


// https://codeforces.com/profile/abubakar119147
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
        string rev=s;
        reverse(rev.begin(), rev.end());
        if(s<=rev){
            if(n%2==0){
                cout << s << endl;
            }else{
                cout << s << rev << endl;
            }
        }else{
            if(n%2==1){
                cout << rev << endl;
            }else{
                cout << rev << s << endl;
            }
        }
    }
    
    return 0;


// Alhamdulillah
}