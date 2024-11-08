#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // 1st approach
    pair<string,int> student = make_pair("Istiak", 20);
    cout << student.first << " " << student.second << endl;


    // 2st approach
    pair<string,int> student1 = make_pair("Wazida", 20);
    auto[name, roll] = student1;
    cout << name << " " << roll << endl;


    // Modify value
    cout << "\nAfter Modify" << endl;
    student.first = "Abu Bakar Istiak";
    name = "Kazi Wazida Rahman";
    cout << student.first << " " << student.second << endl;
    cout << name << " " << roll << endl;



    // pair of array
    int n;
    cin >> n;
    pair<string, int> students[n];
    for(int i=0; i<n; i++){
        cin >> students[i].first >> students[i].second;
    }
    // Normal print;
    for(int i=0; i<n; i++){
        cout << students[i].first << " " << students[i].second << endl;
    }
    // Rnage based;
    for(auto [x, y] : students){
        cout << x << " " << y << endl;
    }



    // Nested pair;
    pair<string, pair<int, string>> p = {"Wazida", {809,"01494"}};
    string name = p.first;
    int roll = p.second.first;
    string phoneNumber = p.second.second;
    cout << name << " " << roll << " " << phoneNumber << endl;


    return 0;
}