/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-17 || 18:36:28
 * * * * File    : RCB_vs_CSK.cpp
 */

// https://www.codechef.com/problems/RCBCSK
// Problem A;

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
    int s1, s2; cin >> s1 >> s2;
    int res=s1-s2;
    if(res>=18){
        cout << "RCB" << endl;
    }else{
        cout << "CSK" << endl;
    }
    return 0;


 // Alhamdulillah
}