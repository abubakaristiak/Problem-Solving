/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-20 || 00:16:02
 * * * * File    : A_Jellyfish_and_Undertale.cpp
 */


// https://codeforces.com/problemset/problem/1875/A
// Problem E;



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
    while(t--){
        int a,b,n; cin >> a >> b >> n;
        vector<ll>v(n);
        ll sum=b;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i]+1<=a){
                sum+=v[i];
            }else{
                sum+=a-1;
            }
        }
        cout << sum << endl;
    }
    return 0;


// Alhamdulillah
}