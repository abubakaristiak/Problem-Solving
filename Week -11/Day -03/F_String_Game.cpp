/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-11 || 19:12:48
 * * * * File    : F_String_Game.cpp
 */


// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F


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
    string t,p; cin >> t >> p;
    int n=t.size(), m=p.size();

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        v[i]--;
    }

    bool found=false;
    auto ok = [&](int del){
        vector<bool> bad(n);
        for(int i=0; i<=del; i++){
            bad[v[i]] = true;
        }

        int j=0;
        for(int i=0; i<n; i++){
            if(!bad[i] && t[i]==p[j]){
                j++;
            }
            if(j==m){
                found=true;
                return true;
            }
        }
        return false;
    };


    int l=0, r=n-1, mid, ans=0;
    while (l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans = mid;
            l=mid+1;
        }else{
            r=mid-1;
        }

    }
    cout << (found ? ans+1 : ans) << endl;
    
    
    return 0;


// Alhamdulillah
}