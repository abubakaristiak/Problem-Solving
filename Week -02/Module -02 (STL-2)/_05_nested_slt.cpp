#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    map<vector<int>, int> mp;
    vector<int> a;
    a.push_back(3);
    a.push_back(54);
    a.push_back(33);
    a.push_back(8);
    mp[a]=1000;

    for(auto [x,y]:mp){
        vector<int> v=x;
        for(auto value:v){
            cout << value << " ";
        }
        cout << endl;
        cout << y << endl;
    }



    // int, set--> map
    map<int, set<int>> mp1;
    set<int> s1;
    s1.insert(3);
    s1.insert(6);
    s1.insert(9);

    set<int> s2;
    s2.insert(3);
    s2.insert(6);
    s2.insert(9);

    set<int> s3;
    s3.insert(3);
    s3.insert(6);
    s3.insert(9);

    mp1[3]=s1;
    mp1[6]=s2;
    mp1[9]=s3;

    for(auto [x,y]:mp1){
        cout << "key " << x << "--> "; 
        for(auto value:y){
            cout << value << " ";
        }
        cout << endl;
    }


    // Lower && Upper bound --> map
    int key=3, bound=7;
    auto lb1 = mp1.lower_bound(key);
    if(lb1!=mp1.end()){
        int ans=lb1->first;
        cout << ans << endl;
        auto lb2 = mp1[ans].lower_bound(bound);
        if(lb2!=mp1[ans].end()){
            cout << *lb2 << endl;
        }
        
    }
    
    return 0;
}