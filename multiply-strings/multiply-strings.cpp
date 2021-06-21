class Solution {
public:
    string mul(string s ,int num)
    {
        string res = "";
        int carry = 0;
        for (int i= s.size()-1 ;i>=0;i--)
        {
            int mul = (s[i]-'0') * num + carry;
            res += (mul%10 + '0');
            carry = mul/10;
            //cout<<carry<<" ";
        }
        
        while (carry)
        {
            res += (carry%10+'0') ;
            carry = carry/10;
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
    
    string add(string ans , string s )
    {
        if ( s.size()==0)
            return ans;
        if (ans.size()==0)
            return s;
        
        string res = "";
        int i = ans.size()-1, j = s.size()-1 , carry = 0; //ans always smaller
        
        while (i>=0 && j>=0)
        {
            int sum = ans[i--]-'0' + s[j--]-'0' + carry;
            carry = sum/10;
            res+= ( sum%10 + '0');
            
        }
       
        while (j>=0)
        {
            int sum = s[j--]-'0' + carry;
            carry = sum/10;
            res+= (sum%10 + '0');
        }
        
        while (carry)
        {
            res += (carry%10+'0') ;
            carry = carry/10;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    string multiply(string num1, string num2) {
        
        if (num1.size()<num2.size())
            return multiply(num2,num1);
        
        //num1 size always be greater now
        if (num2.size()==1 && num2[0]=='0')
            return "0";
        
        string ans = "";
        int k = 0;//for adding zeroes
        for (int i = num2.size()-1 ;i>=0 ;i--)
        {
            int num = num2[i]-'0';
            string s = mul(num1,num);
            //cout<<s<<endl;
            
            //Now we have to add
            int zeros = k;
            while (zeros--)
            {
                s+='0';
            }
            
            string p = add(ans,s);
            k+=1;
            ans = p;
            
            //cout<<p<<endl;
        }
         
        
        return ans;
        
    }
};