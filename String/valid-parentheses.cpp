class Solution {
public:
    bool rev(string s){
        string s1=s;
        reverse(s.begin(),s.end());
        return s1==s;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]==s[j]){
                ++i;
                --j;
            }
            else{
                return rev(s.substr(i+1,j-i))||rev(s.substr(i,j-i));
            }
            
        }
        return true;
    }
};
