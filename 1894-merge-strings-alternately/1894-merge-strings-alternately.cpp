class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length();
	int n2 = word2.length();
	int n = min(n1,n2);
	
	string temp="";
	int i =0;
	while(i<n){
		temp=temp+word1[i]+word2[i];
		i++;
	}
	
	while(i<n1){
		temp+=word1[i++];

	}
	while(i<n2){
		temp+=word2[i++];
	}
	
	return temp;

        
        
    }
};