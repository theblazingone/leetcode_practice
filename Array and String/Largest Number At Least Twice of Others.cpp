class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int size = nums.size(), ans;
        int m = *max_element(nums.begin(), nums.end());
        bool flag = false;
        
        if (size == 1){
            return 0;
        }
        else {
            for (int i=0; i<size; i++){
                if (nums[i] == m){
                    ans = i;
                }
            }
            
            for (int i=0; i<size; i++){
                if (2*nums[i] > m && i!=ans)
                    return -1;
            }
                
            return ans;
        }
        
    }
};