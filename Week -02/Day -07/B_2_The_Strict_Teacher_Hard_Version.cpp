/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * User    : abubakaristiak
 * * * * Created : 2024-11-09 || 19:11:33
 * * * * File    : B_2_The_Strict_Teacher_Hard_Version.cpp
 */


// https://codeforces.com/problemset/problem/2005/B2
// Problem 11;

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
        int n,m,q;
        cin >> n >> m >> q;
        vector<int> tec(m);
        for(int i=0; i<m; i++){
            cin >> tec[i];
        }

        sort(tec.begin(), tec.end());
        while (q--)
        {
            int d; cin >> d;
            if(d<tec[0]){
                cout << tec[0]-1 << endl;
                continue;
            }
            if(d>tec[m-1]){
                cout << n-tec[m-1] << endl;
                continue;
            }
            auto it=lower_bound(tec.begin(),tec.end(),d);
            auto jt=it;
            jt--;

            int left=*jt, right=*it;
            int mid=(left+right)/2;
            cout << min(abs(mid-left), abs(mid-right)) << endl;

        }
    }
    
    return 0;
}


