class Solution {
public:
    vector<vector<int>> generate(int size) {
        
        vector <vector<int>> res;
        
        res.push_back({1});
        
        if (size <= 1){
            return res;
        }
        
        res.push_back({1,1});
        
        if (size == 2){
            return res;
        }
        
        for (int i = 2; i < size; i++){
            
            vector <int> n;
            n.push_back(1);
            for (int j = 0; j <= i-2; j++){
                n.push_back(res[i-1][j] + res[i-1][j+1]);
            }
            n.push_back(1);
            
            res.push_back(n);
        }
        
        return res;
    }
};