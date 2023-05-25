class Solution(object):
    def lengthOfLastWord(self, s):
       str = s.strip().split()
       return(len(str[-1])) 
            
        
        