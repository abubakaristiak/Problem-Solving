/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-07 || 22:22:31
 * * * * File    : A_Superhero_Transformation.cpp
*/


// https://codeforces.com/problemset/problem/1111/A


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool isVowel(char ch){
    if(ch=='a'||ch=='e'|| ch=='i'|| ch=='u'||ch=='o'){
        return true;
    }
    return false;
}
void solve()
{
    string a,t; cin >> a >> t;
    if(a.size()!=t.size()){
        cno;
        return;
    }
    bool ok=true;
    for(int i=0; i<a.length(); i++){
        if(isVowel(a[i]) !=isVowel(t[i])){
            ok=false;
        }
    }
    if(ok){
        cyes;
    }else cno;
}


int main()
{
    fast();
    int t=1;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}