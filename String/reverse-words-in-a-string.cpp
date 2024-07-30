class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        vector<string> arr;
        string word="";
        for(char c:s){
            if(c!=' '){
                word+=c;
            }
            else{
                if(word!="")
                arr.push_back(word);
                word="";
            }
        }
        if(!word.empty())
        arr.push_back(word);
        for(int i=arr.size()-1;i>0;i--){
            ans+=arr[i]+" ";
        }
        ans+=arr.front();
        return ans;
    }
};
