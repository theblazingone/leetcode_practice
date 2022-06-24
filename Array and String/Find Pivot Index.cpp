class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sum = 0, sum_l = 0, i = 0;
        
        for (int& num: nums){
            sum += num;
        }
        
        for (int& num: nums){
            if (sum_l*2 == sum - num)
                return i;
            sum_l += num;
            i++;
        }
        
        return -1;
    }
};