class Solution {
public:
    string longestCommonPrefix(vector<string>& A) {
        
        int n = A.size();
    if (n==0)
        return "";
        
    if (n==1)
        return A[0];
        
    string min_str = A[0],res="";
    int ans = 0;
    for (int i =1 ;i<n ;i++)
    {
        if (min_str.size()>A[i].size())
            min_str = A[i];
    }
    
    
    for (int i=0 ;i<min_str.size() ;i++)
    {
        int match_ch = min_str[i];
        bool flag = true;
        for (int j=0 ;j<n ;j++)
        {
            if (match_ch!=A[j][i])
            {
                flag = false;
                break;
            }
            
        }
        
        if (flag)
            ans++;
        else
            break;
    }
    
    //cout<<ans;
    return min_str.substr(0,ans);
    
    }
};