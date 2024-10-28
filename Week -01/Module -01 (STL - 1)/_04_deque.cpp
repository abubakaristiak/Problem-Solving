#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n; 
    deque <int> dq(n);
    for(int i=0; i<n; i++){
        // int x; cin >> x;
        // dq.push_back(x);
        cin >> dq[i];
    }
    for(auto val : dq){
        cout << val << " ";
    }
    cout << '\n';

    dq.push_front(99);   // add element front;
    dq.push_front(22);  
    dq.pop_front();      // delete front element;
    dq.pop_back();       // delete last element;
    for(auto val : dq){
        cout << val << " ";
    }
    cout << endl;

    cout << dq.front() << " " << dq.back();
    return 0;
}