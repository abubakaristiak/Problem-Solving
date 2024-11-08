#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    multiset<int> st;

    //insert element;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        st.insert(x);
    }

    // value print;
    for(auto it=st.begin(); it!=st.end(); it++){
        cout << *it << " ";
    }cout << endl;

    // range based loop (value print);
    for(auto it:st){
        cout << it << " ";
    } cout << endl;


    // find 
    auto it=st.find(5);
    if(it != st.end()) cout << "Found"<< endl;
    else cout << "Not Found" << endl;


    // erase
    // st.erase(2);
    // for(auto it:st){
    //     cout << it << " ";
    // } cout << endl;

    // only one element erase
    // auto it1 = st.find(2);
    // st.erase(it1);
    // for(auto it1:st){
    //     cout << it1 << " ";
    // } cout << endl;


    // count;
    cout << st.count(2) << endl;

    // lower bound;
    // int x; cin >> x;
    // auto it1=st.lower_bound(x); 
    // if(it1==st.end()) cout << "End" << endl;
    // else cout << *it1 << endl;


    // upper bound;
    int x; cin >> x;
    auto it1=st.upper_bound(x); 
    if(it1==st.end()) cout << "End" << endl;
    else cout << *it1 << endl;
    return 0;
}