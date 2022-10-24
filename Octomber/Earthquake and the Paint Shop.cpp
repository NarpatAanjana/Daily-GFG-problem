struct alphanumeric {
    string name;
    int count;
};
class Solution {
  public:
    vector<alphanumeric> sortedStrings(int N, vector<string> A) {
     
        // code here
    
        map<string,int>mp;
        vector<alphanumeric>ans;
        
        for(auto i:A)
        {
            mp[i]+=1;
        }
        
        for(auto i:mp)
        {
            ans.push_back({i.first,i.second});
        }
        return ans;
    }
};
