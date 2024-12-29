/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-29 || 09:31:17
 * * * * File    : D_Taxes.cpp
 */


// https://codeforces.com/problemset/problem/735/D
// Problem 04



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

bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main()
{
    fast();
    int n; cin >> n;

    if(isPrime(n)){
        cout << 1 << endl;
    }else if(n%2==0){
        cout << 2 << endl;
    }else{
        if(isPrime(n-2)){
            cout << 2 << endl;
        }else cout << 3 << endl;
    }
    return 0;


// Alhamdulillah
}