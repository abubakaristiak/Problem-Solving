//https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en
// Problem: G

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int s,t;
    cin >> s >> t;
    int cnt=0;

    for(int i=0; i<=s; i++){
        for(int j=0; j<=s-i; j++){
            for(int k=0; k<=s-i-j; k++){
                if(i+j+k <=s && i*j*k <=t){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}