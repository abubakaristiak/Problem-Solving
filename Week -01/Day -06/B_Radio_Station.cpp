// https://codeforces.com/contest/918/problem/B
// Problem 8

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin >> n >> m;
    map<string, string> mp;

    while (n--){
        string name,ip;
        cin >> name >> ip;
        mp[ip]=name;
    }
    while (m--){
        string name,ip;
        cin >> name >> ip;
        ip.pop_back();
        cout << name << " " << ip <<"; #" << mp[ip] << endl;
    }
    return 0;
}