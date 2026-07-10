class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.length();
        int count=0;
        vector<int>small(26,-1);
        vector<int>big(26,-1);
        for(int i=0;i<n;i++){
            char ch=word[i];
            if(islower(ch)){
                small[ch-'a']=i;
            }
            else{
                if(big[ch-'A']==-1){
                    big[ch-'A']=i;
                }
            }
        }
        for(int i=0;i<26;i++){
            if(small[i]!=-1 && big[i]!=-1 && small[i]<big[i]){
                count++;
            }
        }
        return count;
    }
};