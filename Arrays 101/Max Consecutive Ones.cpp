class Solution {
public:
    int cnt=0, maximum=0;
    
    int findMaxConsecutiveOnes(vector<int>& nums) {
        for (int i=0; i<nums.size(); i++){
            if (nums[i] == 1){
                cnt++;
                maximum = max(maximum, cnt);
            }
            else {
                cnt=0;
            }
        }
        
        return maximum;
    }
};