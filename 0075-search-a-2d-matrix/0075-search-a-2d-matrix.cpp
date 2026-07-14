class Solution {
public:
    bool searchInRow(vector<vector<int>>& mat, int tar, int row){
        int n = mat[0].size();
        int st=0, e=n-1;
        while(st<=e){
            int mid=st+(e-st)/2;
            if(tar==mat[row][mid]){
                return true;
            }
            else if(tar>mat[row][mid]){
                st=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n=matrix[0].size();
        int startR = 0, endR=m-1;
        while(startR <= endR){
            int midR = startR + (endR-startR)/2;
            if(target >= matrix[midR][0] && target <= matrix[midR][n-1]){
                return searchInRow(matrix, target,  midR);
            }
            else if(target>=matrix[midR][n-1]){
                startR = midR+1;
            }
            else{
                endR = midR-1;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna