/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-24 || 11:58:36
 * * * * File    : D_Right_Left_Wrong.cpp
 */

// https://codeforces.com/contest/2000/problem/D
// Problem 9;


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
        vector<ll> v(n), prefixSum(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
            prefixSum[i]=v[i];
        }
        for(ll i=1; i<n; i++){
            prefixSum[i]+=prefixSum[i-1];
        }
        string s; cin >> s;
        ll ans=0; 
        ll l=0, r=n-1;
        while (l<=r)
        {
            if(s[l]=='R'){
                l++;
            }else{
                if(s[r]=='L'){
                    r--;
                }else{
                    ans+=prefixSum[r];
                    if(l>0){
                        ans-=prefixSum[l-1];
                    }
                    l++;
                    r--;
                }
            }
        }
        cout << ans << endl;
        

        
    }
    
    return 0;


// Alhamdulillah
}



