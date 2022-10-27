class Solution {
  public:
    vector<int> leafNodes(int arr[],int N) {
        // code here
        stack<int>s;
        vector<int>ans;
        
        for(int i=0,j=1;i<N,j<N;i++,j++)
        {
            if(arr[i]>arr[j])
            s.push(arr[i]);
        else
        {
            int flag=0;
            while(s.size()>0 && arr[j]>s.top())
            {
                s.pop();
                flag=1;
            }
            
            if(flag==1)
            ans.push_back(arr[i]);
            
        }
        }
        
        ans.push_back(arr[N-1]);
        return ans;
    }
};
