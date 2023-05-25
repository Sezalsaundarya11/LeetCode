class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        set<vector<int>>s;

        sort(nums.begin(), nums.end());

        int i =0; 

        for(int i =0; i<nums.size(); i++){
            int j=i+1;
            int k=nums.size()-1;

            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if (nums[i]+nums[j]+nums[k]>0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }

        for(auto x:s){
            v.push_back(x);
        }

        return v;

        
    }
};