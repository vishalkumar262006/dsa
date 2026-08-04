class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int curr = nums[0];
        vector<int> result;

        int i = 0;
        while(i < nums.size()) {
            if(curr < nums[i]) {
                result.push_back(curr);  // missing element
                curr++;
            }
            else {  // curr == nums[i]
                i++;
                curr++;
            }
        }

        return result;
    }
};