vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>> ans;
         map<string,vector<string>>mp;
         for(auto i:strs){
            string word=i;
            sort(i.begin(),i.end());
            mp[i].push_back(word);
         }  
         for(auto j:mp){
            ans.push_back(j.second);
         }
         return ans;
    }
};
