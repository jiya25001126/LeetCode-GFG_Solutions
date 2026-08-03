class Solution {
  public:
    vector<vector<int>> getSubArrays(vector<int>& arr) {
        vector<vector<int>> ans;
        
        int n = arr.size();
        
        for(int i = 0; i < n; i++) {
            vector<int> temp;
            for(int j = i; j < n; j++) {
                temp.push_back(arr[j]);
                ans.push_back(temp);
            }
        }
        
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna