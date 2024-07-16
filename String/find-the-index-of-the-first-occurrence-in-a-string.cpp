class Solution {
public:
    int strStr(string haystack, string needle) {
        int n2=needle.length();
        int n1=haystack.length();
        if(n1<n2){ return -1;}
        for(int i=0;i<=haystack.length()-n2;++i){
            if(haystack.substr(i,n2)==needle){
            return i;}
        }
        return -1;
    }
};
