/*
* Bismillahir Rahmanir Raheem
*
* * * * Admin    : abubakaristiak
* * * * Created : 2024-11-11 || 09:17:19
* * * * File    : C_Prepend_and_Append.cpp
*/

// https://codeforces.com/problemset/problem/1791/C

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
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int left=0, right=n-1;
        int ans=n;
        
        while (left<=right)
        {
            if(s[left]==s[right]){
                break;
            }
            else{
                ans-=2;
                left++;
                right--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}




