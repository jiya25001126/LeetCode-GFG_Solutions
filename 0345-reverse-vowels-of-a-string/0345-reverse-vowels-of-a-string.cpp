class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    string reverseVowels(string s) {
        int left = 0;
        int right = s.length()-1;
        while(left<right){
            while(left < right && !isVowel(s[left]))
                left++;
            while(left < right && !isVowel(s[right]))
                right--;
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna