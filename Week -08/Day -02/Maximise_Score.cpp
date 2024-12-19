/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-19 || 12:30:13
 * * * * File    : Maximise_Score.cpp
 */



// https://vjudge.net/contest/679642#problem/B
// Problem B;


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
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int alice=INT_MAX;
        for(int i=1; i<n; i++){
            int val=abs(v[i]-v[i-1]);
            if(val<alice){
                alice=val;
            }

        }
        cout << alice << endl;
        cout << "my name is abu bakar istiak";
    }
    

    return 0;


// Alhamdulillah
}