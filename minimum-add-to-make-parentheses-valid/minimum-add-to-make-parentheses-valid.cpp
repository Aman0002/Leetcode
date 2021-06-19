class Solution {
public:
    int minAddToMakeValid(string s) {
        
        if (s.size()==0)
            return 0;
        stack<char>st;
        st.push(s[0]);
        
        for (int i=1 ;i<s.size();i++)
        {
           char x = s[i];
           if (x=='(')
               st.push(x);
           else
           {
               if (st.size()&&st.top()=='(')
                   st.pop();
               else
                   st.push(x);
           }
        
        }
        return st.size();
    }
};