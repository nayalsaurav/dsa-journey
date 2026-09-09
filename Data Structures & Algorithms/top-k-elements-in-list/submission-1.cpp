class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> bucket(n + 1);
        unordered_map<int, int> mp;
        for (auto& x : nums) mp[x]++;

        for (auto& [x, cnt] : mp) {
            bucket[cnt].push_back(x);
        }
        vector<int> result;
        for (int i = n; i >= 1 && k > 0; --i) {
            for (int x : bucket[i]) {
                result.push_back(x);
                if (--k == 0) break;
            }
        }
        return result;
    }
};
