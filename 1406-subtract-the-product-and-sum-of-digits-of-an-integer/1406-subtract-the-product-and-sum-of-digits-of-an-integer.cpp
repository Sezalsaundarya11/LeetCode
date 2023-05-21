class Solution {
public:
    int subtractProductAndSum(int n) {
     int p =1, s =0, res;
        while(n!=0){
            res = n%10;
            p*=res;
            s+=res;
            n=n/10;
        }
        
        return p-s;
    }
};