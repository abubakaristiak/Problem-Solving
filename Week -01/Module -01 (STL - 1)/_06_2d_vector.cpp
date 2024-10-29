#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // one way to declare vector of vector
    // int n,m;
    // cin >> n >> m;
    // vector<vector<int>> v(n,vector<int>(m,0));
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout << v[i][j] <<" ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;



    // another way to declare vector of vector
    // int n; 
    // cin >> n;
    // vector<vector<int>> v;
    // for(int i=0; i<n; i++){
    //     int m;
    //     cin >> m;
    //     vector<int> a;
    //     for(int j=0; j<m; j++){
    //         int x; 
    //         cin >> x;
    //         a.push_back(x);
    //     }
    //     v.push_back(a);
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<v[i].size(); j++){
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    /*
    input: 3
    2
    1 2
    5
    1 2 3 4 5 
    3
    11 22 33
    */



    // vector of string
    int n;
    cin >> n;
    vector<string> vcc;
    for(int i=1; i<=n; i++){
        string s;
        cin >> s;
        vcc.push_back(s);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<vcc[i].size(); j++){
            cout << vcc[i][j] << " ";
        }
        cout << endl;
    }
    /*
    input: 
    3
    abubakar 
    kaziwazida
    istiak
    */
    


    return 0;
}