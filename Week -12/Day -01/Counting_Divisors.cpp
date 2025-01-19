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
const int maxN=1e6+9;
vector<int> divisors(maxN);
int main()
{
    fast();
    for(int i=1; i<maxN; i++){
        for(int j=i; j<maxN; j+=i){
            divisors[j]++;
        }
    }
    int t; cin >> t;
    while (t--)
    {
        int x; cin >> x;
        cout << divisors[x] << endl;
    }
    
    
    return 0;


// Alhamdulillah
}