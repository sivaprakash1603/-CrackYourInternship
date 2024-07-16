class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string s;
       int i=-1;
       do{
        ++i;
        s+=strs[0][i];
        for(int j=0;j<strs.size();j++){
            if(s[i]!=strs[j][i]||strs[j][i]=='\0'){
                s[i]='\0';
            }
        }
       }while(s[i]);
       return s.substr(0,i);
    }
};
