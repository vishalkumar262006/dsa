class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<int,int>mp;
        int result=0;
        int start_key=2;
        for(char ch:word){
            if(start_key>9){
                start_key=2;
            }
            mp[start_key]++;
            result+=mp[start_key];
            start_key++;
        }
        return result;
    }
};