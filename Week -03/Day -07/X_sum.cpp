// This is not my code...it's written my sonior bhai Forhad

#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(),(X).end()
#define allr(X) (X).rbegin(),(X).rend()
#define yes cout<<"YES"<<nl;
#define no cout<<"NO"<<nl;
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const long long int INF = 1e18+5;
const int N = 1e6 + 5;
#define fs string::npos //find string in string
#define mem0(X) memset(X,0,sizeof(X))
#define mem1(X) memset(X,1,sizeof(X))
#define memMin1(X) memset(X,-1,sizeof(X))
using namespace std;
  
  
void solve(){
    ll n,initial_sum=0;cin>>n;
    string s;cin>>s;
    vector<ll>v1,L,R,max_val;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            v1.push_back(i-0);
            L.push_back(i-0);
            R.push_back(n-1-i);
        }
        else{
            v1.push_back(n-1-i);
            R.push_back(n-1-i);
            L.push_back(i-0);
        } 
    }
    for(auto &it:v1)initial_sum+=it;
    for(int i=0;i<n;i++){
        ll x = max(L[i],R[i])-v1[i];
        max_val.push_back(x);
    }
    sort(allr(max_val));
    ll sum =initial_sum;
    for(int k=0;k<n;k++){
        sum+=max_val[k];
        cout<<sum<<" ";
    }
    cout<<nl;
}
  
  
int main()
{
fast();
    int t=1;cin>>t;
    while(t--)solve();
    
}