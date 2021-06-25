class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     
        if (nums.size()==0 || nums.size()==1)
            return nums.size();
        
        int l = 1 ;
        
        for (int i= 1; i<nums.size() ; i++)
        {
            if (nums[i]!=nums[i-1])
                nums[l++] = nums[i]; 
            
        }
        
        return l;
    }
};