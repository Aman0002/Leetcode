class Solution {
public:
    bool valid_IPV4(string s)
    {
        int i = 0 , n = s.length();
        int cnt = 0 ;//cnt number of dots
        int size = 0;
        if (s.size()==0)
            return false;
        
        if (s[s.size()-1]=='.')
            return false;
        
        while (i<n)
        {
            //checking for leading zeros
            if (i+1<n && s[i]=='0'&&s[i+1]!='.')
                return false;
            
            int x = 0;
            size = 0 ;
            while (i<n && s[i]!='.')
            {
                if (!(s[i]>='0'&& s[i]<='9'))
                    return false;
        
                x = x*10 +s[i]-'0';
                size++;
                if (size>3)
                    return false;
                i++;
            }
            if (size==0)//Nothing there 
                return false;
            //size = 0;
            
            if (s[i]=='.')
                cnt++;
            
            if (i<n && cnt>3)
                return false;
            
            i++; //to skip the dot
            if (!(x>=0 && x<=255))
                return false;
        }
        
        if (cnt!=3)
            return false;
        
        return true;
    }
    bool valid_IPV6(string s)
    {
        if (s.size()==0)
            return false;
        
        int i = 0 , n = s.length();
        int cnt = 0 ;//cnt number of dots
        int size = 0;
        
        if (s[s.size()-1]==':')
            return false;
        
        while (i<n)
         {
            size = 0;
            while (i<n && s[i]!=':')
            {
                if (!( (s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='f')||(s[i]>='A'&&s[i]<='F') ) )
                    return false;
                
                i++;
                size++;
                if (size>4)
                    return false;
            }
            
            if (size==0 || size>4)
                return false;
            
            //size = 0;
            
            if (i<n && s[i]==':')
                cnt++;
            
            i++; //to skip the colon
            if (cnt>7)
                return false;
          }
        
        if (cnt!=7)
            return false;
            
        return true;
    }
    string validIPAddress(string IP) {
        
        
        return valid_IPV4(IP) ? "IPv4" : ( valid_IPV6(IP) ? "IPv6" : "Neither");
        
    }
};