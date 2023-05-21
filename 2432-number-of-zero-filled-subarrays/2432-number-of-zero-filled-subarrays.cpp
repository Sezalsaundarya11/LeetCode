class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long countZero=0; long long subArrayCount=0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]==0){
                countZero++;
                subArrayCount+=countZero;
            }
            else{
                countZero=0;
            }
        }
        return subArrayCount;
        
    }
};