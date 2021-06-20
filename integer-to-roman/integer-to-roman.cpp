class Solution {
public:
    string intToRoman(int A) {
        string ans = "";
    vector<pair<int,string>> help {{1,"I"},{4,"IV"},{5,"V"},{9,"IX"},{10,"X"},{40,"XL"},
    {50,"L"},{90,"XC"},{100,"C"},{400,"CD"},{500,"D"},{900,"CM"},{1000,"M"}};

    
    int x = help.size()-1;
    while (x>=0&&A)
    {
        auto p = help[x];
        int cnt = A/p.first;
        while (cnt--)
            ans+=p.second;
        
        A = A%p.first;
        x--;
    }
    
    return ans;
    }
};