/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-21 || 16:08:34
 * * * * File    : _01_39_Combination Sum.cpp
*/


// https://leetcode.com/problems/combination-sum/description/


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


class Solution {
public:
    void solve(vector<int>& candidates, int target, int sum, int start, vector<int> &tmp, vector<vector<int>> &res){
        if(sum==target){
            res.push_back(tmp);
            return;
        }
        if(sum>target){
            return;
        }

        for(int i=start; i<candidates.size(); i++){
            tmp.push_back(candidates[i]);
            solve(candidates, target, sum+candidates[i], i, tmp, res);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        asort(candidates);
        vector<int> tmp;
        vector<vector<int>> res;
        solve(candidates, target, 0, 0, tmp, res);
        return res;

    }
};