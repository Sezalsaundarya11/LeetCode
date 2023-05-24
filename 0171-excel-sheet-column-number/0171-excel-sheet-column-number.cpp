class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        
        int j = columnTitle.length()-1;
        int ans=0;
        for(int i =0; i<columnTitle.length(); i++){
            char s = columnTitle[j--];
            int d = s-'A'+1;
            ans+= pow(26,i)*d;
        }

        return ans;
       
    }
};