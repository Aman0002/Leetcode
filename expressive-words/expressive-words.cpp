class Solution {
public:
    vector<pair<char , int>> helper (string s)
    {
        vector<pair<char , int >> temp;
        
        int i=0 ;
        
        while (i <s.size())
        {
            char x = s[i];
            int cnt = 1;
            while (i+1 <s.size())
            {
                if (s[i]==s[i+1]) cnt++;
                else break;
                
                i++;
            }
            i++;
            temp.push_back({x , cnt});
        }
        
        
        return temp;
    }
    bool is_poss (vector<pair<char , int>> &temp1 ,
                  vector<pair<char , int>> &temp2 )
    {
        if (temp1.size()!=temp2.size()) return false;
        
        
        for (int i=0 ; i<temp1.size() ; i++)
        {
            pair<char , int> frst = temp1[i];
            pair<char , int> scnd = temp2[i];

            
            if (frst.first != scnd.first) return false;
            if (frst.second < scnd.second ) return false;
            if (frst.second <3 && frst.second!=scnd.second) return false;
        }
        return true;
    }
    int expressiveWords(string s, vector<string>& words) {
        
        vector<pair<char , int>> temp1 = helper (s);
        
        int cnt = 0;
        
        for (auto x : words)
        {
            vector< pair<char , int> > temp2 = helper (x);
            
            if (is_poss (temp1 , temp2))
                cnt++;

        }
        
        
        return cnt;
    }
};