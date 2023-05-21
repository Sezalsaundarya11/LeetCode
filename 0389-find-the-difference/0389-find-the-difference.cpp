class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0,sum2=0, sumDiff=0;
        for(int i =0; i<s.length(); i++){
            char ch=s[i];
            sum1+=int(ch);
        }
        for(int i =0; i<t.length(); i++){
            char ch=t[i];
            sum2+=int(ch);
        }
        sumDiff=sum2-sum1;
        return char(sumDiff);

    }
};