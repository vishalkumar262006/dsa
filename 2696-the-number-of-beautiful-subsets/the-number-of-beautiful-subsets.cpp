class Solution {
public:
    vector<vector<int>> result;
    int n;
    void solve(int idx, vector<int>& temp, int k, vector<int>& nums) {
        if (idx == n) {
            int j = temp.size();
            // if (temp.size() == 1) {
            //     result.push_back(temp);
            // }
            if (temp.size() > 1) {
                for (int i = 0; i < j; i++) {
                    for (int j = i + 1; j < temp.size(); j++) {
                        if (abs(temp[i] - temp[j]) == k)
                            return;
                    }
                }
            }
            if(!temp.empty()){
            result.push_back(temp);
            }
            return;
        }
        temp.push_back(nums[idx]);
        solve(idx + 1, temp, k, nums);
        temp.pop_back();
        solve(idx + 1, temp, k, nums);
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        n = nums.size();
        vector<int> temp;
        solve(0, temp, k, nums);
        return result.size();
    }
};