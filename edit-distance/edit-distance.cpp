class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int  n = word1.size();
        int  m = word2.size();
        
        
        int **a = new int*[n+1];
        for (int i=0;i<=n;i++)
        {
            a[i] = new int[m+1];
            for (int j =0 ; j <= m ;j++)
            {
                if (i==0)
                    a[i][j] = j;
                else if (j==0)
                    a[i][j] = i;
                else if (word1[i-1]==word2[j-1])
                    a[i][j] = a[i-1][j-1];
                else
                    a[i][j] = 1 + min(a[i-1][j-1],min(a[i-1][j],a[i][j-1]));
            }
        
        
        }
        
        return a[n][m];
        
    }
};