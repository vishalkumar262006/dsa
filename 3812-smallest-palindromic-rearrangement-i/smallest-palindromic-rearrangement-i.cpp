class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int mid = n / 2;
        string a = s.substr(0, mid);
        sort(a.begin(), a.end());
        string b=a;
        reverse(b.begin(),b.end());
        string ans;
        if(n%2==0){
            ans=a+b;
        }
        else{
            ans=a+s[mid]+b;
        }
        return ans;

    }
};