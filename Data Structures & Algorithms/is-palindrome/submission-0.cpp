class Solution {
   public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;
        while (l < r) {
            if (isalnum(s[l]) && isalnum(s[r])) {
                if (tolower(s[l]) == tolower(s[r])) {
                    l++;
                    r--;
                } else
                    return false;
            } else if (!isalnum(s[l]))
                l++;
            else
                r--;
        }
        return true;
    }
};
