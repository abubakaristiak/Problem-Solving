/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-18 || 19:45:45
 * * * * File    : A_Two_Elevators.cpp
 */


// https://codeforces.com/problemset/problem/1729/A
// Problem F;

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
        int a,b,c; cin >> a >> b >> c;
        int ans1=abs(a-1);
        int ans2=abs(b-c)+(c-1);
        if(ans1==ans2){
            cout << 3 << endl;
        }else if(ans1<ans2){
            cout << 1 << endl;
        }else cout << 2 << endl;
    }
    
    return 0;


 // Alhamdulillah
}