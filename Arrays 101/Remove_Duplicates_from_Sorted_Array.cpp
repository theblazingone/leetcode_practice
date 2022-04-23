class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        vector<int>::iterator res;
        
        res = unique(nums.begin(), nums.end());
        nums.resize(distance(nums.begin(), res));
        
        return nums.size();
    }
};