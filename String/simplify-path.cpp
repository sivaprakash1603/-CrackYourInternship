class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        for(int i=0;i<path.length();i++){
            if(path[i]=='/')
            continue;
            string temp="";
            while(path[i]!='/'&&i<path.size()){
                temp+=path[i];
                i++;
            }
            if(temp==".."){
                if(!st.empty())
                st.pop();
            }
            else if(temp=="."){
                continue;
            }
            else{
                st.push(temp);
            }

        }
        string ans="";
        while(!st.empty()){
            ans="/"+st.top()+ans;
            st.pop();
        }
        if(ans=="")
        return "/";
        else
        return ans;
    }
};
