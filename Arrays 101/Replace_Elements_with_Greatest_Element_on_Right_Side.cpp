class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int size = arr.size();

        for (int i=0; i<size; i++){
            for (int j=i+1; j<size; j++){
                if (arr[i] < arr[j]){
                    arr[i] = arr[j];
                }
            }
        }
        
        arr.erase(arr.begin());
        arr.push_back(-1);
        
        return arr;
    }
};