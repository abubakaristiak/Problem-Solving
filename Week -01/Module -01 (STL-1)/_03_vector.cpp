#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // int n; cin >> n;
    // vector<int> v;
    // for(int i=0; i<n; i++){
    //     int x; cin >> x;
    //     v.push_back(x);
    // }
    // for(int i=0; i<v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // cout << "vector size: " << v.size() << endl;
    // v.pop_back();
    // cout << "Update size: " << v.size() << endl;

    // cout << v.front() << endl;
    // cout << v.back() << endl;
    // v.clear();
    // cout << v.empty() << endl; 



    // // assign(); 
    // int m; cin >> m;
    // // vector<int> v1(m);
    // vector<int> v1;
    // v1.assign(m,-1);
    // for(int i=0; i<m; i++){
    //     cout << v1[i] << " ";
    // }



    // // resize();
    // vector<int> v;
    // v.resize(4);
    // cout << "size of vector: " << v.size() << endl;
    // for(int i=0; i<v.size(); i++){
    //     cin >> v[i];
    // }
    // for(int i=0; i<v.size(); i++){
    //     cout << v[i] << " ";
    // }


    // // iteration;
    // int n; cin >> n;
    // vector<int> v;
    // for(int i=0; i<n; i++){
    //     int x; cin >> x;
    //     v.push_back(x);
    // }
    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout << *it << " ";
    // }cout << '\n';

    // // reverse order;
    // for(auto it = v.rbegin(); it != v.rend(); it++){
    //     cout << *it << " ";
    // }
    // cout << '\n';


    // // last element access throw iterator;
    // int n; cin >> n;
    // vector<int> v;
    // for(int i=0; i<n; i++){
    //     int x; cin >> x;
    //     v.push_back(x);
    // }
    // // auto lastElement = v.end();
    // // lastElement--;
    // auto lastElement = --v.end();
    // cout << *lastElement << endl;



    // // reverse();
    // int n; cin >> n;
    // vector<int> v;
    // for(int i=0; i<n; i++){
    //     int x; cin >> x;
    //     v.push_back(x);
    // }
    // reverse(v.begin(), v.end());
    // for(auto val:v){
    //     cout << val << " ";
    // } 
    // cout << '\n';




    // sort()-- Ascending order;
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(auto val:v){
        cout << val << " ";
    } 
    cout << '\n';


    
    // // sort()-- Descending order;
    // int n; cin >> n;
    // vector<int> v;
    // for(int i=0; i<n; i++){
    //     int x; cin >> x;
    //     v.push_back(x);
    // }
    // // sort(v.rbegin(), v.rend());
    // sort(v.begin(), v.end(), greater<int>());
    // for(auto val:v){
    //     cout << val << " ";
    // } 
    // cout << '\n';

    // max & min element;
    auto mn = min_element(v.begin(), v.end());
    auto mx = max_element(v.begin(), v.end());
    cout << *mx << " " << *mn << endl;

    int maxElementPosition = mx-v.begin();
    cout << "Max Element Position: " <<maxElementPosition << endl;

    return 0;
}