/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-16 || 16:35:04
 * * * * File    : H_Maximal_AND.cpp
 */


// https://codeforces.com/problemset/problem/1669/H
// Problem 03;


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
const int B=30;

using namespace std;
int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        int n,K; cin >> n >> K;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        vector<int> bits(B+1);
        for(int i=0; i<n; i++){
            for(int k=B; k>=0; k--){
                if((v[i] >> k) & 1){
                    bits[k]++;
                }
            }
        }

        int ans=0;
        for(int k=B; k>=0; k--){
            if(bits[k]==n){
                ans+=(1LL<<k);
            }else{
                int need=n-bits[k];
                if(K>=need){
                    ans+=(1LL<<k);
                    K-=need;
                }
            }
        }

        cout << ans << endl;


    }
    
    return 0;


// Alhamdulillah
}