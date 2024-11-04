//https://codeforces.com/problemset/problem/1722/B
// Problem F;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string a,b; cin >> a >> b;
        for(int i=0; i<n; i++){
            if(a[i]=='G' && b[i]=='B'){
                a[i]='B';
            }
            if(a[i]=='B' && b[i]=='G'){
                b[i]='B';
            }
        }
        if(a==b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}