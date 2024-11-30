/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-30 || 11:30:27
 * * * * File    : A_Not_a_Substring.cpp
 */


// https://codeforces.com/problemset/problem/1860/A
// Problem N;


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
        string s; cin >> s;
        int n=s.size();
        string a="";
        string b="";
        a.push_back('(');
        while (a.size()<2*n)
        {
            if(a.back()=='('){
                a.push_back(')');
            }else{
                a.push_back('(');
            }
        }
        while (b.size()<n)
        {
            b.push_back('(');
        }
        while (b.size()<2*n)
        {
            b.push_back(')');
        }

        if(a.find(s)==string::npos){
            yes;
            cout << a << endl;
        }else if(b.find(s)==string::npos){
            yes;
            cout << b << endl;
        }else no;
    }
    
    return 0;


// Alhamdulillah
}



