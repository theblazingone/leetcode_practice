class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        vector <int> result;
        
        if (mat.size() == 0){
            result.push_back(0);
            return result;
        }
        
        int m = mat.size();
        int n = mat[0].size();
        int row = 0, col = 0;
        int sz = m * n;
        int direction = 1;
        
        for (int i = 0; i < sz; i++){
            
            result.push_back(mat[row][col]);
            
            int new_row = row + (direction == 1 ? -1 : 1);
            int new_col = col + (direction == 1 ? 1 : -1);
            
            if (new_row < 0 || new_row == m || new_col < 0 || new_col == n){
                if (direction){
                    row += (col == n-1 ? 1 : 0);
                    col += (col < n-1 ? 1 : 0);
                }
                else {
                    col += (row == m - 1 ? 1 : 0);
                    row += (row < m-1 ? 1 :0);
                }
                
                direction = 1 - direction;
            }
            else {
                row = new_row;
                col = new_col;
            }
        }
        
        return result;
    }
};