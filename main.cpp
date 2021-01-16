class Solution {
public:
    bool halvesAreAlike(string s) {
        int firstHalfCount = 0;
        int secondHalfCount = 0;
        
        bool res = false;
        
        int mid = s.size() / 2;
        
        for (int i = 0; i < mid; ++i) {
            char ch = tolower(s[i]);
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                firstHalfCount++;
            }
        }
        for (int i = mid; i < s.size(); ++i) {
            char ch = tolower(s[i]);
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                secondHalfCount++;
            }            
        }
        
        res = firstHalfCount == secondHalfCount;
        
        return res;
    }
};
