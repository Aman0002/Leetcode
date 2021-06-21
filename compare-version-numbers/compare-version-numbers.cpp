class Solution {
public:
    int compareVersion(string version1, string version2) {
        
        int n = version1.size() , m = version2.size();
        int i=0 , j =0 ;//i for version 1 j for version2
        
        while (i<n && j <m)
        {
    
            int ver1 = 0 , ver2 = 0;
            while (i<n && version1[i]!='.')
            {
                ver1 = ver1*10 + version1[i]-'0' ;
                i++;
            }
            i++;//because to jump from the dot
            while (j<m && version2[j]!='.')
            {
                ver2 = ver2*10 + version2[j]-'0' ;
                j++;    
            }
            j++;
            
            if (ver1>ver2)
                return 1;
            else if (ver1<ver2)
                return -1;
            
        }
        
        int x = 0 ;
        while (i<n)
        {
            while (i<n && version1[i]!='.')
            {
                x = x*10 +version1[i]-'0';
                if(x>0)
                    return 1;
                
                i++;
            }
            i++;
        }
        
        x = 0;
        while (j<m)
        {
            while (j<m && version2[j]!='.')
            {
                x = x*10 +version2[j]-'0';
                if(x>0)
                    return -1;
                j++;
            }
            j++;
        }
        return 0;
    }
};