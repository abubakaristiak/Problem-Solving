/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-15 || 12:42:40
 * * * * File    : B_Petr_and_a_Combination_Lock.cpp
 */


// https://codeforces.com/problemset/problem/1097/B


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
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    bool track=false;
    for(int mask=0; mask<(1<<n); mask++){
        int sum=0;
        for(int k=0; k<n; k++){
            if((mask>>k) & 1){
                sum+=v[k];
            }else sum-=v[k];
        }
        if(sum%360==0){   
            track=true;
            break;
        }
    }
    if(track) yes;
    else no;
    
    
    return 0;


// Alhamdulillah
}