/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-13 || 19:23:46
 * * * * File    : A_Compare_T_Shirt_Sizes.cpp
 */


// https://codeforces.com/problemset/problem/1741/A
// Problem G;


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
    int t; cin >> t;
    while(t--){
        string a,b; cin >> a >> b;
        int n=a.size();
        int m=b.size();

        char last1, last2;
        int cnt1=0, cnt2=0;
        for(int i=0; i<n; i++){
            if(a[i]!='X'){
                last1=a[i];
            }else{
                cnt1++;
            }
        }
        for(int i=0; i<m; i++){
            if(b[i]!='X'){
                last2=b[i];
            }else{
                cnt2++;
            }
        }


        if(last1==last2){
            if(cnt1==cnt2 || last1=='M'){
                cout << "=" << endl;
                continue;
            }
            if(last1=='S'){
                if(cnt1>cnt2){
                    cout << "<" << endl;
                }else{
                    cout << ">" << endl;
                }
            }else if(last1=='L'){
                if(cnt1>cnt2){
                    cout << ">" << endl;
                }else{
                    cout << "<" << endl;
                }
            }
            continue;
        }

        if(last1=='S'){
            cout << '<' << endl;
        }else if(last1=='L'){
            cout << ">" << endl;
        }else if(last1=='M' && last2=='L'){
            cout << "<" << endl;
        }else if(last1=='M' && last2=='S'){
            cout << ">" << endl;
        }

    }
    return 0;
}