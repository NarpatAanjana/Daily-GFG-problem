class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int arr[k] = {0};
        for(int i = 0; i < nums.size(); i++){
            arr[nums[i]%k]++;
        }
        if(arr[0]%2 || arr[k/2]%2){
            return false;
        }
        for(int i = 1; i < k/2; i++){
            if((arr[i] != arr[k-i])){
                return false;
            }
        }
        return true;
    }
};
