
// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C

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

int main() {
    ll n,s;
    cin >> n >> s;
    vector<ll> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    ll l=0, sum=0, cnt=0;
    ll r=0;
    while (r<n)
    {
        sum+=a[r];
        while (sum>s)
        {
            sum-=a[l];
            l++;
        }
        cnt+=(r-l+1);
        r++;
        
    }
    cout << cnt << endl;
    return 0;
}
