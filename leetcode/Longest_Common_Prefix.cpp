class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        
        int n = str.size();
        if(n==0) return "";
        
        int mi = INT_MAX;
        int i=0 ;
        string c = str[0] , ans = "";
        
        for(i=1 ; i<str.size() ; i++)
        {
            int j=0 , k=0 , a=0;
            while(j < c.size() && k< str[i].size())
            {
                if(c[j] == str[i][k])
                {
                    a++ ; j++ ; k++;
                }
                else
                    break;
            }
            
            mi = min(mi , a);
            
        }
        ans = c.substr(0,mi);
        return ans;
    }
};