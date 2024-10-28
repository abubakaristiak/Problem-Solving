// https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en
// Problem: E

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,t; cin >> a >> b >> t;
    int pro_tm=(t+0.5)/a;
    int ans=b*pro_tm;
    cout << ans << endl;
    return 0;
}