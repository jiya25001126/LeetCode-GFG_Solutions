class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totGas = 0, totCost=0;
        for(int val : gas){
            totGas += val;
        }
        for(int val : cost){
            totCost += val;
        }
        if(totGas<totCost){
            return -1;
        }
        int st=0, currGas=0;
        for(int i=0;i<gas.size();i++){
            currGas += (gas[i]-cost[i]);
            if(currGas<0){
                st = i+1;
                currGas = 0;
            }
        }
        return st;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna