#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    while (n--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int assign=a*b;
        int convert=c*24*60;
        if(assign <= convert) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}