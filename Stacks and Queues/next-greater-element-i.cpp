class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        vector<int> ans(a.size(),-1);
        map<int,int> mp;
        stack<int> st;
        for(int i:b){
            while(!st.empty()&&st.top()<i){
                mp[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        for(int i=0;i<a.size();++i){
            if(mp[a[i]]){
                ans[i]=mp[a[i]];
            }
        }
        return ans;
    }
};
