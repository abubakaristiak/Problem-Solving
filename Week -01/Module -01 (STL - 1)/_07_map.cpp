#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // map<int, int> mp;
    // mp.insert({1,10});
    // mp[2]=20;
    // cout << mp[1] << endl;
    // cout << mp[2] << endl;


    map<int, int> mp;
    mp[2]=20;
    mp[1]=10;
    mp[4]=55;
    mp[6]=80;

    // for(auto it:mp){
    //     int key=it.first, value=it.second;
    //     cout << key << " " << value << endl;
    // }
    for(auto [key, value]:mp){
        cout << key << " " << value << endl;
    }
    // find iterator;
    auto it = mp.find(1);
    if(it == mp.end()){
        cout << "Key not found" << endl;
    }else{
        cout << it->first << " " << it->second << endl << endl;
    }

    // erase
    auto it1 = mp.find(4);
    if(it != mp.end()){
        mp.erase(it1);
    }
    for(auto [key, value]:mp){
        cout << key << " " << value << endl;
    }
    cout << "size of map: " << mp.size() << endl;


    // iterator;
    auto it2 = mp.begin();
    it2++;
    cout << it2->first << " " << it2->second << endl;

    // lower bound;
    mp[4]=34;
    auto it3 = mp.lower_bound(3);
    cout << it3->first << " " << it3->second << endl;


    // upper bound:
    auto it4 = mp.upper_bound(3);
    cout << it4->first << " " << it4->second << endl;
    
    





    return 0;
}