class Solution {
public:
    string addBinary(string a, string b) {

        int l1=a.length();
        int l2=b.length();

        if(l2>l1){
            int no_of_zero_append=l2-l1;
            for(int i =0; i<no_of_zero_append; i++){
                a="0"+a;
            }   
        }

        if(l1>l2){
            int no_of_zero_append=l1-l2;
            for(int i =0; i<no_of_zero_append; i++){
                b="0"+b;
            }
            
        }

        int carry=0;
        string ans="";
        for(int i = a.length()-1; i>=0; i--){
           // cout<<a[i]<<"+"<<b[i]<<"+"<<carry<<endl;
            if(a[i]=='1'&& b[i]=='1'&& carry==0){
                ans="0"+ans;
                carry=1;
            }
            else if(a[i]=='1'&& b[i]=='1'&& carry==1){
                ans="1"+ans;
                carry=1;
            }
            else if(a[i]=='1'&& b[i]=='0'&& carry==0){
                ans="1"+ans;
                carry=0;
            }
            else if(a[i]=='1'&& b[i]=='0'&& carry==1){
                ans="0"+ans;
                carry=1;
            }
            else if(a[i]=='0'&& b[i]=='1'&& carry==1){
                ans="0"+ans;
                carry=1;
            }
            else if(a[i]=='0'&& b[i]=='1'&& carry==0){
                ans="1"+ans;
                carry=0;
            }
            else if(a[i]=='0'&& b[i]=='0'&& carry==1){
                ans="1"+ans;
                carry=0;
            }
            else if(a[i]=='0'&& b[i]=='0'&& carry==0){
                ans="0"+ans;
                carry=0;
            }
            
            
        }
        if(carry==1){
                ans="1"+ans;
            }
            return ans;

        

    

        
    }
};