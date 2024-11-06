#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    for(int i=1; i<=t; i++){
        int n; cin >> n;
        int tes=n/7;
        if(n%7 >= 2) tes++;
        cout << tes << endl;
    }
    
    return 0;
}
