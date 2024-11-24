/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-24 || 15:45:22
 * * * * File    : F_Money_Trees.cpp
 */


// https://codeforces.com/problemset/problem/1873/F
// Problem 8;


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
    while(t--){
        int n;
        ll k;
        cin >> n >> k;
        vector<int> fruits(n), height(n);
        for(int i=0; i<n; i++){
            cin >> fruits[i];
        }
        for(int i=0; i<n; i++){
            cin >> height[i];
        }

        ll cur=0;
        int l=0, r=0, mxlen=0;
        while (r<n)
        {
            cur+=fruits[r];
             while (l<r && (height[r-1]%height[r]!=0 || cur > k))
            {
                cur-=fruits[l];
                l++;
            }
            if(cur<=k){
                mxlen=max(mxlen, r-l+1);
            }
            r++;
        }
        cout << mxlen << endl;
        
    }
    return 0;


// Alhamdulillah
}