//https://vjudge.net/contest/667724#problem/F

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        string s,t;
        cin >> s >> t;
        int sCnt=0, tCnt=0, bCnt=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1') sCnt++;
            if(t[i]=='1') tCnt++;
            if(s[i]!=t[i]) bCnt++;

        }
        if(sCnt != tCnt) {
            cout << "NO" << endl;
            continue;
        }
        if(n==2){
            if((k%2==0 && s==t) || (k%2!=0 && s[0]==t[1] && s[1]==t[0])){
                cout << "YES"<< endl;
            }else {
                cout << "NO" << endl;
            }
        }else{
            if(bCnt/2 <= k){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        } 
    }
    return 0;
}