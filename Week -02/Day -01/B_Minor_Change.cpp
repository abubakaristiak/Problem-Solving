//https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en
// Problem B;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a,b;
    cin >> a >> b;
    int cnt=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i]){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}