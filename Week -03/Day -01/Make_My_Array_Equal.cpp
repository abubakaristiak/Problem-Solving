/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-10 || 23:23:04
 * * * * File    : Make_My_Array_Equal.cpp
 */

// https://www.codechef.com/problems/MEBA
// Problem c;

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
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        asort(v);
        if(n==1){
            yes;
        }else{
            bool flag=false;
            for(int i=0; i<n-1; i++){
                if(v[i]==0){
                    continue;
                }else{
                    if(v[i]!=v[i+1]){
                        flag=true;
                        break;
                    }
                }
            }
            if(flag) no;
            else yes;
        }
    }
    
    return 0;
}