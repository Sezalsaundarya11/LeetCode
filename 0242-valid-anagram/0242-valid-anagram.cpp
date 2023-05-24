class Solution {
public:
    bool isAnagram(string s, string t) {

        int freqArr[255]={0};

        if(s.length()!=t.length()){
            return false;
        }

        for(int i = 0; i<s.length(); i++){
            char c = s[i];
            int val =  c-'a';
            freqArr[val]++;
        }

        for(int i =0; i<t.length(); i++){
            int val = t[i]-'a';
            freqArr[val]--;
            if(freqArr[val]<0){
                return false;
            }
        }

        return true;
        
    }
};