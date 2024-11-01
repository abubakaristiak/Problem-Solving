// https://codeforces.com/problemset/problem/1907/B
//Problem 6

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int ch_lower=0, ch_upper=0;
        deque<char> dq;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='B'){
                ch_upper++;
                continue;
            }
            if(s[i]=='b'){
                ch_lower++;
                continue;
            }
            if(ch_lower && islower(s[i])){
                ch_lower--;
                continue;
            }
            if(ch_upper && isupper(s[i])){
                ch_upper--;
                continue;
            }
            dq.push_front(s[i]);
        }
        for(auto &it:dq){
            cout << it;
        }
        cout << endl;
    }
    return 0;
}












// TLE---test case-03
/*
#include<bits/stdc++.h>
#define ll long long
#define B begin()
#define E end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test; cin >> test;
    while (test--)
    {
        string s; cin >> s;
        int n=s.length();

        vector<char> sc,cc;
        vector<bool> check(n+2, true);
        for(int i=0; i<n; i++){
            if(s[i]=='b'){
                if(!sc.empty()){
                    check[sc.back()]=false;
                    sc.pop_back();
                }
                check[i]=false;
            }
            else if(s[i]=='B'){
                if(!cc.empty()){
                    check[cc.back()]=false;
                    cc.pop_back();
                }
                check[i]=false;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                cc.push_back(i);
            }
            else{
                sc.push_back(i);
            }   
        }
        for(int i=0; i<n; i++){
            if(check[i]){
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
*/