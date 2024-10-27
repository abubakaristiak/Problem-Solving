//https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
// Problem: B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,c; cin >> a >> b >> c;
    int res=-1;
    for(int i=a; i<=b; i++){
        if((i%c)==0){
            res=i;
        }
    }
    cout << res << endl;

    return 0;
}