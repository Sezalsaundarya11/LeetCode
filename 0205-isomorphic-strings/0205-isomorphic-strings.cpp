class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int arr1[256]={-1};
        int arr2[255]={-1};
    
    int l1 = s.length();
    int l2 = t.length();
    
    if(l1!=l2)
        return 0;
    
    for(int i =0; i<l1; i++){
       if(!arr1[s[i]] && !arr2[t[i]]){

           arr1[s[i]]=t[i];
           arr2[t[i]]=s[i];

       }
       else if(arr1[s[i]]!=t[i] || arr2[t[i]]!=s[i]){
           return false;
       }
        
    }
    return 1;
        
    }
};