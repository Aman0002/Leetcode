class Solution {
public:
    
    bool is_Cyclic (vector<vector<int>>& g, vector<bool> &visited, 
                    vector<bool> &recstack , int sv)
    {
    
        
        visited[sv] = true;
        recstack[sv] = true;
        
        for (auto x :g[sv])
        {
           if (visited[x] && recstack[x])
               return true;
            else if (!visited[x])
            {
                if (is_Cyclic(g,visited,recstack,x))
                    return true;
            }
        }
        
        
        recstack[sv] = false;
        return false;
        
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
    
        //Creation of adjacency list
        vector<vector<int>> g(numCourses);
        for (auto x:prerequisites)
        g[x[0]].push_back(x[1]);
        
        //Boolean visited array and rec stack
        vector<bool> visited (numCourses , false);
        vector<bool> recstack (numCourses , false);
        
        for(int i = 0; i < numCourses ;i++){
            
            if (!visited[i])
            {
                if (is_Cyclic(g,visited,recstack,i))
                    return false;
            }
        }
        
        return true;
        
    }
};