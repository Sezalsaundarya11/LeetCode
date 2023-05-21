class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int tempSum = 0;

        for(int i =0; i<nums.size(); i++){
            sum+=nums[i];

        };

        for(int i =0; i<nums.size(); i++){
            sum-=nums[i];
            if(sum==tempSum)
                return i;
            tempSum+=nums[i];
        }
        return -1;

        
           
    }
};