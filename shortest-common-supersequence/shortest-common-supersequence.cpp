class Solution {
public:
    string shortestCommonSupersequence(string a, string b) {
        
        int m = a.length(), n = b.length();
    int dp[m+1][n+1];
 
    // Fill table in bottom up manner
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
           // Below steps follow above recurrence
           if (!i)
               dp[i][j] = j;
           else if (!j)
               dp[i][j] = i;
           else if (a[i-1] == b[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
           else
                dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1]);
        }
    }
 
   // Following code is used to print supersequence
   int index = dp[m][n];
 
   // Create a string of size index+1 to store the result
   string res(index, '\0');
 
   // Start from the right-most-bottom-most corner and
   // one by one store characters in res[]
   int i = m, j = n;
   while (i > 0 && j > 0)
   {
      // If current character in a[] and b are same,
      // then current character is part of LCS
      if (a[i-1] == b[j-1])
      {
          // Put current character in result
          res[index-1] = a[i-1];
 
          // reduce values of i, j and indexs
          i--; j--; index--;
      }
 
      // If not same, then find the smaller of two and
      // go in the direction of smaller value
      else if (dp[i-1][j] < dp[i][j-1])
      { res[index-1] = a[i-1];   i--;  index--; }
      else
      { res[index-1] = b[j-1];  j--; index--; }
   }
 
   // Copy remaining characters of string 'a'
   while (i > 0)
   {
       res[index-1] = a[i-1];   i--;  index--;
   }
 
   // Copy remaining characters of string 'b'
   while (j > 0)
   {
       res[index-1] = b[j-1];  j--; index--;
   }
 
   // Print the result
   return res;
    }
};