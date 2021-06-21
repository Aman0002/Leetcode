class Solution {
public:
    string convert(string s, int numRows) {
        
        if (numRows==1)
                return s;
        vector<string> temp (numRows,"");
        string res = "";
        bool dir = false ;//false for down
        int i = 0;
        for (int j = 0 ;j<s.size() ; j++)
        {
            if (i==0) dir = false;
            if (i==numRows-1) dir = true;
            
            temp[i]+=s[j];
            
            if (!dir) i++; //going down
            if (dir) i--; //going up
        }
        
        for (auto x :temp)
            res+=x;
        
        return res;
    }
};