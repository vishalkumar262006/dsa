class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(n>m){
            return false;
        }
        vector<int>s1_freq(26,0);
        vector<int>s2_freq(26,0);
        for(int i=0;i<n;i++){
            s1_freq[s1[i]-'a']++;
        }
        int u=0;
        int v=0;
        while(v<m){
            s2_freq[s2[v]-'a']++;
            if(v-u+1>n){
                s2_freq[s2[u]-'a']--;
                 u++;
            }
            if(s1_freq==s2_freq){
                return true;
            }
            v++;
        }
        return false;
        
    }
};