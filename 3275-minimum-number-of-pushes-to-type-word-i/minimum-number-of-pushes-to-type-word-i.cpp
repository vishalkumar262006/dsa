class Solution {
public:
    int minimumPushes(string word) {
        // unordered_map<int,int>mp;
        // int result=0;
        // int start_key=2;
        // for(char ch:word){
        //     if(start_key>9){
        //         start_key=2;
        //     }
        //     mp[start_key]++;
        //     result+=mp[start_key];
        //     start_key++;
        // }
        // return result;
        int result=0;
        vector<int>mp(26,0);
        for(char ch:word){
            mp[ch-'a']++;
        }
        sort(mp.begin(),mp.end(),greater<int>());
        for(int i=0;i<26;i++){
            int freq=mp[i];
            int press= i/8+1;
            result+=press*freq;
        }
        return result;
    }
};