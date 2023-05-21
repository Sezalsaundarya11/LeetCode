class Solution {
public:
    bool isValid(char ch){
        string str;
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
            return 1;
        else
            return 0;    
    }

    char toLowerCase(char ch){
        if((ch>='a' && ch<='z')  || (ch>='0' && ch<='9'))
            return ch;

        else{
            ch  = ch - 'A'+'a';
		    return ch;
        }


    }

    bool isPalindrome(string s) {

        string temp="";
        int st = 0;
        int e = s.length()-1;

        //faltu character remove

        for(int i =0; i<= e; i++){
            if(isValid(s[i])){
                temp.push_back(s[i]);
            }
        }

        //lowerCase

       

        int end = temp.length()-1;

        while(st<=end){
            if(toLowerCase(temp[st++])!=toLowerCase(temp[end--])){
                return false;
            }
        }

        return true;



        
    }
};