class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        
        
        int n = h.size();//size of heights

        vector<int> left(n) , right(n);//left and right;
        
        stack<int> s;
        
        int ans = 0;
        
        
        //Filling up the left array
        for (int i=0 ;i<n ;i++)
        {
            while (s.size()&&h[s.top()]>=h[i])
                s.pop();
            
            if (s.size()==0)
            {
                left[i] = 0;
            }else
            {
                left[i] = s.top() + 1 ;
            }
            
            s.push(i);
        }
        while (s.size())
            s.pop();
        //Filling up the right array
        for (int i= n-1; i>=0 ;i--)
        {
            while (s.size()&& h[s.top()]>=h[i])
                s.pop();
            
            if (s.size()==0)
            {
                right[i] = n-1;
            }else
            {
                right[i] = s.top() - 1 ;
            }
            
            s.push(i);
        }
        while (s.size())
            s.pop();
        
        //Finding the maximum rectangle in histogram
        for (int i=0 ; i<n ; i++)
        {
            ans = max(ans, (right[i]-left[i]+1 )*h[i]);
        }
        
        
        return ans;
    }
};