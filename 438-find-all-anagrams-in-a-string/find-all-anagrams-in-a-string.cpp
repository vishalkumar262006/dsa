class Solution {
public:
    bool allzero(vector<int>&counter){
        for(int i:counter){
            if(i!=0){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string txt, string pat) {
        int n=txt.size();
         vector<int>result;
        vector<int>counter(26,0);
        for(int i=0;i<pat.length();i++){
            char ch=pat[i];
            counter[ch-'a']++;
        }
        int i=0,j=0;
     //   int result=0;
        int k=pat.length();
        while(j<n){
            counter[txt[j]-'a']--;
            if(j-i+1==k){
                if(allzero(counter)){
                    result.push_back(i);
                }
                counter[txt[i]-'a']++;
                i++;
            }
            j++;
        }
        return result; 
    }
};