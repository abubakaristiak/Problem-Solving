/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-11 || 21:16:21
 * * * * File    : B_Yoga_Class.cpp
 */


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
        int a,b,c;
        cin >> a >> b >> c;
        int tpc=a/2;
        int tpb=a%2;
        
        int res=(c*tpc)+(b*tpb);
        int t_res=a*b;
        cout << max(res,t_res) << endl;

    }
    return 0;
}






