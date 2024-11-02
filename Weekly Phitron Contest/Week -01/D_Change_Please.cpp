//https://vjudge.net/contest/667724#problem/D

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    int bill=100;
    while (n--)
    {
        int x; cin >> x;
        int res=bill-x;
        int cnt=res/10;
        int ans=cnt*10;
        cout << ans << endl;
    }
    
    return 0;
}