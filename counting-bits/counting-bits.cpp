class Solution {
public:
    vector<int> countBits(int A) {
        
    int cnt = 0 ;
    vector<int> help(A + 1, 0);
    //long long int ans = 0;
    
    for (int i=1 ;i<=A ;i++)
    {
        if (i%2!=0)
        {
            help[i] = 1 + help[i-1];
        }else
        {
            help[i] = help[i/2];
        }
       
    }
    
    return help;
    }
};