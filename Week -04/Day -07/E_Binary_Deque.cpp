/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-24 || 09:18:57
 * * * * File    : E_Binary_Deque.cpp
 */


// https://codeforces.com/problemset/problem/1692/E
// Problem 7;


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
        ll n, s; cin >> n >> s;
        vector<ll> v(n);
        ll sum=0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum+=v[i];
        }
        if(sum<s) {
            cout << -1 << endl;
            continue;
        }
        else if(sum==s) {
            cout << 0 << endl;
            continue;
        }
        
        ll l=0, r=0, curSum=0, mxLen=0;
        while(r<n){
            curSum+=v[r];
            while(curSum>s){
                curSum-=v[l];
                l++;
            }
            if(curSum<=s){
                mxLen=max(mxLen, r-l+1);
            }
            r++;
        }
        cout << n-mxLen << endl;
    }
    
    return 0;


// Alhamdulillah
}