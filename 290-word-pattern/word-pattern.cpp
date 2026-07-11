class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;//converting string into vector tyoe structure toa ccess 
        stringstream ss(s);
        string token;
        int countwords=0;
        while(getline(ss,token,' ')){
            words.push_back(token);
            countwords++;
        }
        int n= pattern.length();
        if(countwords!=n){
            return false;
        }
        unordered_map<string,char>mp;
        set<char>st;
        for(int i=0;i<n;i++){
            string word=words[i];
            char ch=pattern[i];
            if(mp.find(word)==mp.end()&& st.find(ch)==st.end()){//tha hi nahi 
                st.insert(ch);
                mp[word]=ch;
            }
            else if(mp[word] !=pattern[i]){
                return false;
            }
        }
        return true;


    }

};