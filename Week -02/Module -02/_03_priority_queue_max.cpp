#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    priority_queue<int> pq;
    pq.push(3);
    pq.push(2);
    pq.push(3);
    pq.push(6);
    pq.push(2);
    pq.push(3);
    pq.push(6);
    
    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;
    // pq.pop();

    // cout << pq.size() << endl;
    // cout << pq.empty() << endl;


    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}