class Solution {
public:
    int getMinSwaps(string s1, int k) {
        
        
       
        string s2 =s1;
        while (next_permutation(s2.begin(),s2.end()) &&--k);
        
        
        int i = 0, j = 0;
        int result = 0;
        int size = s1.size();
    
    while (i < size) {
        j = i;
  
        while (s1[j] != s2[i]) {
            j += 1;
        }
  
        while (i < j) {
 
            char temp = s1[j];
            s1[j] = s1[j - 1];
            s1[j - 1] = temp;
            j -= 1;
            result += 1;
        }
        i += 1;
    }
        
        return result;
    }
};