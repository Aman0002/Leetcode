class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int n = text1.size();
        int m = text2.size();
        
        int **a = new int*[n+1];
        for (int i =0 ;i <= n ;i++)
        {
            a[i] = new int[m+1];
            
            for (int  j =0 ;j<=m ;j++)
            {
                if (i==0||j==0)
                    a[i][j]=0;
                else if (text1[i-1]==text2[j-1])
                    a[i][j] = 1+a[i-1][j-1];
                else
                    a[i][j] = max(a[i-1][j],a[i][j-1]);
             }
        }
        return a[n][m];
        
    }
};