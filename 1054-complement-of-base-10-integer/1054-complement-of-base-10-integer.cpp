class Solution {
public:
    int bitwiseComplement(int n) {
        if (n==0)
        return 1;


        int x= n;
        int shift=0;
        while(x!=0){
            shift = (shift << 1)| 1;
            x = x>>1;

        }

        int ans = (~n)&shift;
        return ans;



        }
        
    
};