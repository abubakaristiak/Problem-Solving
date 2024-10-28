// https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en
// Problem: D

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    string s=to_string(n);
    string ans="";
    
    for(int i=0; i<(4-s.size()); i++){
        ans+='0';
    }
    ans+=s; cout << ans << endl;
    return 0;
}



/* 
2nd Approach using library;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    cout << setw(4) << setfill('0') << n << endl;

    return 0;
}
*/


/*
TODO: 3rd Approach without convert string;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    if(n>=100 && n<=999){
        cout << '0' << n << endl;
    }
    else if(n>=10 && n<=99){
        cout << "00" << n << endl;
    }
    else if(n>=0 && n<=9){
        cout << "000" << n << endl;
    }
    else cout << n << endl;
    return 0;
}
*/