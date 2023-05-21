class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
             return false;
        
 	   long int rem , new_no=0;
 	    int temp=x;
 	
 	while(x!=0){
	 
 	    rem=x%10;
 	    new_no=new_no*10+rem;
 	    x/=10;
    }
 	
 	if(new_no==temp){
 		return true;
	 }
	 else
		return false;
 }
        
    
};