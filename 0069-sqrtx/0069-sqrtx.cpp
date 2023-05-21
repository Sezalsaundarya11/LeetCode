class Solution {
public:
    int mySqrt(int x) {

      long long  int s = 0;
       long long int e = x;
       long long int mid = s+(e-s)/2;
       int ans;

        while(s<=e){
            long long sq = mid*mid;

            if(sq == x){
                return mid;
            }

            if(sq > x){
                e = mid-1;
            }
            else{
                ans = mid;
                s= mid+1;
            }
            mid = s+(e-s)/2;

        }
        return ans;
        
    }
};