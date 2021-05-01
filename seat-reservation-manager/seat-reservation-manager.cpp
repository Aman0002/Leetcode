class SeatManager {
public:
    set<int> s;
    int min = 1;
    //Making seats 1........n
    SeatManager(int n) {
        //Initially all are unreserved    
        for (int i = 1 ; i <= n ;i++)
            s.insert(i);
    }
    
    int reserve() {
        int x = *s.begin();
        s.erase(x);
        return x;
    }
    
    void unreserve(int seatNumber) {
        
        s.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */