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

int gcd(int a, int b){
    while (b!=0){
        a%=b;
        swap(a,b);
    }
    return a;
    
}
int main()
{
    fast();
    int a,b; cin >> a >> b;
    cout << gcd(a,b) << endl;
    return 0;


// Alhamdulillah
}



// another approach using built in function;
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

int GCD(int a, int b){
    return __gcd(a,b);     // O(log(min(a,b)))
}
int main()
{
    fast();
    int a,b; cin >> a >> b;
    cout << GCD(a,b) << endl;
    return 0;


// Alhamdulillah
}