/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-24 || 11:44:31
 * * * * File    : _02_primality_test.cpp
 */



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
        cout << "Prime" << endl;
    }else cout << "Not Prime" << endl;

    cout << isPrime(n) << endl;

    return 0;


// Alhamdulillah
}