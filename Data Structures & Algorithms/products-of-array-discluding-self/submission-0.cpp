class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> suffix(n, 1);

        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        int prefix = 1;
        vector<int> result;
        for (int i = 0; i < n; i++) {
            result.push_back(prefix * suffix[i]);
            prefix *= nums[i];
        }
        return result;
    }
};
