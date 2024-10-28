//https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
// Problem: F

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; cin >> s;
    set<char> st;
    for(int i=0; i<s.size(); i++){
        st.insert(s[i]);
    }
    
    bool flag=false;
    for(int i=0; i<26; i++){
        char curChar='a'+i;
        if(st.find(curChar) == st.end()){
            cout << curChar << endl;
            flag=true;
            break;
        }
    }
    if(!flag) cout << "None" << endl;
    return 0;
}