class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        while(columnNumber){
            --columnNumber;
            int rem=columnNumber%26;
            s=(char)(rem+'A')+s;
            columnNumber/=26;
        }
        return s;
    }
};
