/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-23 || 13:27:24
 * * * * File    : A_k_th_divisor.cpp
 */



// https://codeforces.com/problemset/problem/762/A
// Problem 01



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
    ll n,k; cin >> n >> k; 
    vector<ll> divisors;
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            divisors.push_back(i);
            if((n/i) != i){
                divisors.push_back(n/i);
            }
        }
    }
    asort(divisors);
    if(k>divisors.size()){
        cout << -1 << endl;
    }else cout << divisors[k-1] << endl;
    return 0;


// Alhamdulillah
}