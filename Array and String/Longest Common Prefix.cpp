class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        int maxi = INT_MAX;
        
        if (n == 0){
            return "";
        }
        else if (n == 1){
            return strs[0];
        }
        
        for (int i = 0; i < n; i++){
            
            if (maxi > strs[i].size()){
                maxi = strs[i].size();
            }
        }

        string ans = "";
        bool flag = 0;
        for (int i = 0; i < maxi; i++){
            
            char ch = strs[0][i];
            for (int j = 0; j < n; j++){
                
                if (ch != strs[j][i]){
                    flag = 1;
                }
            }
            
            if (flag){
                break;
            }
            ans += ch;
        }
        
        return ans;
    }
};