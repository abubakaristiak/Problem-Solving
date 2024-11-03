//https://codeforces.com/problemset/problem/1807/A
// Problem C;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while (t--)
    {
        int a,b,c; 
        cin >> a >> b >> c;
        if(a+b==c){
            cout << "+" << endl;
        }else{
            cout << "-" << endl;
        }
    }
    
    return 0;
}