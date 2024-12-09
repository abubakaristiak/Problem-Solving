/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-08 || 23:25:50
 * * * * File    : _01_bitmasks.cpp
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
int main()
{
    fast();
    int n; cin >> n;
    for(int i=0; i<(1<<n); i++){
        cout << i << "-> ";
        for(int k=0; k<n; k++){
            if((i>>k) & 1){
                cout << 1 << " ";
            }else cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;


// Alhamdulillah
}