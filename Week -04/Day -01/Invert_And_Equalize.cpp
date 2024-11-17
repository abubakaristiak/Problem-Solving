/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-17 || 19:10:21
 * * * * File    : Invert_And_Equalize.cpp
 */


// https://www.codechef.com/problems/INVEQ
// Problem C;


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
        string s; cin >> s;
        int cnt=0;
        for(int i=0; i<n; i++){
            if((i>0) && (s[i]!=s[i-1])){
                cnt++;
            }
        }
        cout << (cnt+1)/2 << endl;
    }
    
    return 0;


 // Alhamdulillah
}