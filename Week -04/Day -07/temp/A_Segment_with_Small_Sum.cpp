
// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A


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
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    ll l=0, r=0;
    ll sum=0, mxlen=0;
    while (r<n)
    {
        sum+=v[r];
        while (sum>k)
        {
            sum-=v[l];
            l++;
        }
        mxlen=max(mxlen, r-l+1);
        r++;
    }
    cout << mxlen << endl;
    
    return 0;


// Alhamdulillah
}