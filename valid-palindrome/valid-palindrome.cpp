class Solution {
public:
    bool isPalindrome(string A) {
        
        int n = A.size();
    
    string x = "";
    
    for (int i=0 ;i < n ;i++)
    {
        if (A[i]-'0'>=0&&A[i]-'0'<=9)
        x+=A[i];
        else if (A[i]>='a'&&A[i]<='z')
        x+=A[i];
        else if (A[i]>='A'&&A[i]<='Z')
        x+= (A[i]+32);
    }
    
    cout<<x;
    int m = x.size()-1, j=0;
    
    while (j<m)
    {
        if (x[j++]!=x[m--])
        return false;
    }
    
    return true;
    
        
    }
};