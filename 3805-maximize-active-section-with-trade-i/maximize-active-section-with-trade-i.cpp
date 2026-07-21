class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.length();
        int active= count(s.begin(),s.end(),'1');
        vector<int>notactive;
        int i=0;
        while(i<n){
            if(s[i]=='0'){
                int start=i;
                while(i<n && s[i]=='0') i++;
                notactive.push_back(i-start);
            }
            else{
                i++;
            }
        }
        int maxpair=0;
        for(int i=1;i<notactive.size();i++){
            maxpair=max(maxpair,notactive[i]+notactive[i-1]);

        }
        return maxpair+active;
    }
};