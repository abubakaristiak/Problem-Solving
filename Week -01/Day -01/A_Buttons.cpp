// https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
// Problem: C

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b; cin >> a >> b;
    int mx=0;
    int smx=0;
    if(a>b){
        mx=a;
        a-=1;
    }
    else{
        mx=b;
        b-=1;
    }
    if(a>b){
        smx=a;
        a-=1;
    }
    else{
        smx=b;
        b-=1;
    }
    int res=mx+smx;
    cout << res << endl;

    return 0;
}