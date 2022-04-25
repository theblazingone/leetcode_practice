class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector <int> expected = heights;
        int cnt=0;
        sort(expected.begin(), expected.end());
        
        for (int i=0; i<expected.size(); i++){
            if (expected[i] != heights[i]){
                cnt++;
            }
        }
        
        return cnt;
    }
};