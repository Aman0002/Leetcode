class Solution {
public:
    void fun(int n,vector<int> &bag,vector<vector<int>> &res,int start,int k)
    {
        //base case
        if(bag.size()==k)
        {
            res.push_back(bag);
            return;
        }
        if(start>n)return;
        if(bag.size()>k)return;
        //rec step
        //include item
        bag.push_back(start);
        fun(n,bag,res,start+1,k);
        bag.pop_back();
        //not include item
        fun(n,bag,res,start+1,k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> bag;
        fun(n,bag,res,1,k);
        return res;
    }
};