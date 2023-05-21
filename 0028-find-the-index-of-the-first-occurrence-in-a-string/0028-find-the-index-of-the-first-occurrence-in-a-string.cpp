class Solution {
public:
    int strStr(string haystack, string needle) {

        int l1 = haystack.length();
        int l2 = needle.length();
        int j=0;
        string str;

        if(l2>l1 || l2==0){
            return -1;
        }

        for(int i =0; i<l1-l2+1; i++){
            if(haystack.substr(i,l2)==needle)
                return i;
            
        }
        return -1;

    }   
       
         
    
};