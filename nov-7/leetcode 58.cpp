class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n = s.length() , count = 0;
        int i = n - 1;
        if( n == 0) 
            return 0;

        while(s[i] == ' ' && i >= 0)
        {
            i--;
            if(i < 0)
                return 0;
        }

        while(s[i] != ' ' &&  i >= 0)
        {
            ++count;
            i--;
            if(i < 0)
                break;
        }
        
        return count;
        
    }
};
