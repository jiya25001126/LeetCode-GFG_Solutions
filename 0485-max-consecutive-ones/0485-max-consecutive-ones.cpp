class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Max=0;
        int current=0;
        for(int num:nums){
            if(num==1){
                current++;
            }
            else{
                Max = max(Max, current);
                current=0;
            }
        }
        return max(Max, current);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna