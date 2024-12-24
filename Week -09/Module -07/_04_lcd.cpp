#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int LCD(int a, int b){
    // return (a*b)/__gcd(a,b);    // O(log(min(a,b)))
    return (a/__gcd(a,b))*b;    // reduce the overflow when number long long
}
int main()
{
    fast();
    int a,b; cin >> a >> b;
    cout << LCD(a,b) << endl;
    return 0;


// Alhamdulillah
}