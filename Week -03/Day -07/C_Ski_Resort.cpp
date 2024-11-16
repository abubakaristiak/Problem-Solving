/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-16 || 19:34:10
 * * * * File    : C_Ski_Resort.cpp
 */


// https://codeforces.com/problemset/problem/1840/C
// Problem 11


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
        int n,k,q; cin >> n >> k >> q;
        int c=0;
        ll ans=0;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            if(x>q){
                if(c>=k){
                    int t=c-k+1;
                    ans+=(1LL*t*(t+1))/2;
                }
                c=0;
            }else c++;
        }
        if(c>=k){
            int t=c-k+1;
            ans+=(1LL*t*(t+1))/2;
        }
        cout << ans << endl; 
    }
    
    return 0;
}