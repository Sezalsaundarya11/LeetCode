class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         //if(nums.empty())return {};
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int diff = abs(nums[i])-1;
            if(nums[diff]<0){
                ans.push_back(abs(nums[i]));
            }
            nums[diff]=-1*nums[diff];
        }
        return ans;
        
    }
};