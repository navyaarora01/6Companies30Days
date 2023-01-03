//Microsoft Series
//Question 3
//Link - https://leetcode.com/problems/bulls-and-cows/description/
//Solution link - https://leetcode.com/problems/bulls-and-cows/solutions/2994320/c-optimised-solution-using-hash-table-strings-unordered-map/

class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.size();
        string ans = "";
        int c = 0;
        int b= 0;
        for(int i = 0;i<n;i++){
            if(secret[i]==guess[i]){
                b++;
            }
        }
        unordered_map<char , int> mp;
        for(auto x : secret){
            mp[x]++;
        }
        for(auto x : guess){
            if(mp[x]>0){
                c++;
                mp[x]--;
            }
        }
        c = c-b;
        string a = to_string(b);
        string d  = to_string(c);
        ans = a + "A"+ d +"B";
        return ans;
    }
};