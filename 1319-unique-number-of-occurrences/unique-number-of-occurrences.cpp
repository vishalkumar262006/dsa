class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;

        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }

        vector<int> ans;

        for(auto it : mp){
            bool alreadypresnt = false;
            int frequency = it.second;

            for(int i=0;i<ans.size();i++){
                if(ans[i] == frequency){
                    alreadypresnt = true;
                    break;
                }
            }

            if(alreadypresnt){
                return false;
            }

            ans.push_back(frequency);
        }

        return true;
    }
};