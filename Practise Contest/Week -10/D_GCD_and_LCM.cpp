/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-30 || 21:51:50
 * * * * File    : D_GCD_and_LCM.cpp
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


ll GCD(ll a, ll b){
    return __gcd(a,b);     // O(log(min(a,b)))
}


ll LCM(ll a, ll b){
    // return (a*b)/__gcd(a,b);    // O(log(min(a,b)))
    return (a/__gcd(a,b))*b;    // reduce the overflow when number long long
}



int main()
{
    fast();
    ll t; cin >> t;
    while (t--)
    {
        ll x,y,k; cin >> x >> y >> k;
        k=min(k, 10ll);
        while (k-->0)
        {
            ll gcd=GCD(x,y);
            if(x>y){
                x=gcd;
            }else y=gcd;

            ll lcm=LCM(x,y);
            if(x>y){
                x=lcm;
            }else y=lcm;
        }

        ll sum=x+y;
        cout << sum << endl;
        
    }
    
    return 0;


// Alhamdulillah
}