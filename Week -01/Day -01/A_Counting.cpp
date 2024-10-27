//https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
// Problem: A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b; cin >> a >> b;
    int cnt=0;
    for(int i=a; i<=b; i++){
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}