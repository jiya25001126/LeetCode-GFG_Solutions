class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for(int i=0;i<str.size();i++){
            if(str[i]=='(' || str[i]=='{' || str[i]=='['){
                s.push(str[i]);
            }
            else{
                if(s.size()==0){
                    return false;
                }
                if((s.top()=='(' && str[i]==')') || (s.top()=='{' && str[i]=='}') || (s.top()=='[' && str[i]==']')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }
        return s.size()==0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna