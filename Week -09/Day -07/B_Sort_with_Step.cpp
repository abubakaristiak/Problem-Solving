/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-30 || 17:11:00
 * * * * File    : B_Sort_with_Step.cpp
 */



// https://codeforces.com/problemset/problem/1823/B
// Problem C



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
    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        
        int v[n];
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        if(is_sorted(v, v+n)){
            cout << 0 << endl;
        }else{
            int cnt=0;
            for(int i=0; i<n; i++){
                int tmpValue=abs(v[i]-(i+1));
                if(tmpValue%k){
                    cnt++;
                }
            }
            if(cnt>2){
                cout << -1 << endl;
            }else if(cnt==2){
                cout << 1 << endl;
            }else cout << 0 << endl;
        }

        
    }
    
    return 0;


// Alhamdulillah
}