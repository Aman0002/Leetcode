class Solution {
public:
    int myAtoi(string A) {
     

    int sign = 1 , i = 0;
    long long int num = 0;

    while (A[i]==' ')
            i++;
    
    if (A[i]=='-')
        sign = 0;
        
    if (A[i]=='-'||A[i]=='+')
        i += 1;
        
    while (i<A.size())
    {
        if (A[i]<'0' || A[i]>'9')
            break;
            
        num = num*10 + A[i]-'0';
        if (num>INT_MAX)
            return sign==1 ?INT_MAX:INT_MIN;
        
        i++;
        
    }
    
    return sign==1 ? num :-1*num;
    }
};