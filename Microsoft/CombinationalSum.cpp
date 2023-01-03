//Microsoft Series
//Question 2
//link - https://leetcode.com/problems/combination-sum-iii/post-solution/
//submission Link - https://leetcode.com/problems/combination-sum-iii/solutions/2994059/c-optimised-solution-backtracking/

class Solution {
public:
vector<vector<int>> ans;
vector<int> ans2;
void helper(int index , int sum , int n , int k){
    if(sum == n && k==0){
        ans.push_back(ans2);
        return;
    }
    if(sum>n){
        return;
    }
    for(int i=index ;i<=9;i++){
        if(i>n){
            break;
        }
        ans2.push_back(i);
        helper(i+1 , sum+i , n , k-1);
        ans2.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        helper(1,0,n,k);
        return ans;
    }
};