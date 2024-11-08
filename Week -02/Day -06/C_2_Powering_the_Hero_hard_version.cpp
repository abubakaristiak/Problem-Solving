// https://codeforces.com/problemset/problem/1800/C2
// Problem 9;

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
        priority_queue<ll> pq;
        ll ans=0;
        int x;
        while (n--)
        {
            cin >> x;
            if(x==0 && !pq.empty()){
                ans+=pq.top();
                pq.pop();
                continue;
            }
            else pq.push(x);
        }
        cout << ans << endl;
    }
    

    return 0;
}
