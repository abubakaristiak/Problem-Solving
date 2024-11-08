/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * User    : abubakaristiak
 * * * * Created : 2024-11-08 || 20:38:16
 * * * * File    : C_Traffic_Light.cpp
 */
// https://codeforces.com/problemset/problem/1744/C
// Problem 12;

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
        ll n; cin >> n;
        char ch; cin >> ch;
        string s; cin >> s;

        s+=s;
        int res=0;
        if(ch=='g'){
            res=0;
        }
        else{
            int i=0;
            while (i<n)
            {
                if(ch==s[i]){
                    for(int j=i+1; j<2*n; j++){
                        if(s[j]=='g'){
                            res=max(res, j-i);
                            i=j;
                            break;
                        }
                    }   
                }
                i++;
            }
        }
        cout << res << endl;
    }
    return 0;
}