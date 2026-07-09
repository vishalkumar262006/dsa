class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff,
                                      vector<vector<int>>& queries) {
        vector<int> component(n, -1);
        int compid = 0;
        component[0] = compid;
        for (int i = 1; i < n; i++) {
            if (nums[i] - nums[i - 1] > maxDiff) {
                compid++;
            }
            component[i] = compid;
        }
        vector<bool> result;
        for (auto it : queries) {
            int u = it[0];
            int v = it[1];
            if (component[u] == component[v]) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
        return result;
    }
};