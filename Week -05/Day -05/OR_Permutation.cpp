/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-28 || 10:03:34
 * * * * File    : OR_Permutation.cpp
 */


// https://www.codechef.com/problems/PERMOR
// Problem 1;


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
        for(int i=n; i>0; i--){
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;


// Alhamdulillah
}