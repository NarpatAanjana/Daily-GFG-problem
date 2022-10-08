class Solution {
  public:
    int countOfSubstrings(string S, int K) {
        // code here
        int ans = 0;
        int  j =0;
        unordered_map<char,int> mp;
        for(int i = 0; i<S.size();i++){
            mp[S[i]]++;
            if(i+1>=K){
                if(mp.size() == K-1) ans++;
                mp[S[j]]--;
                if(mp[S[j]] == 0) mp.erase(S[j]);
                j++;
            }
        }
        return ans;
    }
};
