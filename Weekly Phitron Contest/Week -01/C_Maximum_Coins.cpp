//https://vjudge.net/contest/667724#problem/C

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        int a,b; cin >> a >> b;
        int twin=0, tlose=0;
        for(int i=0; i<b; i++){
            twin+=pow(2,a-i);
        }
        for(int i=0; i<a-b; i++){
            tlose+=pow(2,i+1);
        }
        int tc=twin-tlose;
        cout << tc << endl;

    }
    
    return 0;
}