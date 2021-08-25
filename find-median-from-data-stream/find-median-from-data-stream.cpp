class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> max;
    priority_queue< int , vector<int> , greater<int>> min;
    
    MedianFinder() {
    
    
    }
    void balanceHeaps()
    {
        
        int l = max.size();
        int r = min.size();
        
        if (l - r >1)
        {
            int t = max.top();
            
            max.pop();
            
            min.push(t);
        } else if (r - l >1)
        {
            int t = min.top();
            
            min.pop();
            
            max.push(t);
        }
        
    }
    void addNum(int x) {
        
         if (max.size()==0 || x < max.top())
        {
            max.push(x);
        }else
        {
           
           min.push(x);
        }
        
        balanceHeaps();
    }
    
    double findMedian() {
         return max.size()>min.size()? max.top() : max.size()<min.size()? min.top() : (max.top() + min.top())/2.0; 
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */