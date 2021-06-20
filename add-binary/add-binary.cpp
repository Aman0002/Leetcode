class Solution {
public:
    string addBinary(string A, string B) {
        int n = A.size(), m = B.size() , i = n-1 , carry = 0 , j = m-1;
    string ans = "";
    
    //i is for A and  j is for B
    while (i>=0 && j >=0 )
    {
        int sum = A[i]-'0' + B[j] -'0' +carry;
        carry = sum/2;
        ans+=(sum%2)+'0';
        i--;
        j--;
    }
    
    while (i>=0)
    {
        int sum = A[i]-'0'+carry;
        carry = sum/2;
        ans+=(sum%2)+'0';
        i--;
    }
    
    while (j>=0)
    {
        int sum = B[j]-'0'+carry;
        carry = sum/2;
        ans+=(sum%2)+'0';
        j--;
    }
    if (carry)
        ans+=(carry%2)+'0';
    
    reverse(ans.begin(),ans.end());
    return ans;
        
    }
};