/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-11 || 17:12:56
 * * * * File    : Alt_Tab.cpp
 */

// https://www.codechef.com/problems/ALTTAB
// Problem D;


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    int n; cin >> n;
    stack<string>s;
    for(int i=0; i<n; i++){
        string apps; cin >> apps;
        s.push(apps);
    }
    set<string> st;
    while (!s.empty())
    {
        if(st.find(s.top())==st.end()){
            st.insert(s.top());
            string apps=s.top();
            if(apps.size()>2){
                cout << apps.substr(apps.size()-2);
            }
        }
        s.pop();
    }
    
    return 0;
}