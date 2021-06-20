class Solution {
public:
    bool isPowerOfTwo(long long int n) {
        
        if (n==0)
        return false;
        // Your code here    
        
        return n & n-1 ? false:true ;
      
    }
};