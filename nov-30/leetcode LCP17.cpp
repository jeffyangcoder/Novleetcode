class Solution {
public:
    int calculate(string s) {
        /*if(!s.length())
            return 1;
        int x = 1,y = 0;
        for(int i = 0;i < s.length(); i++)
        {
            if(s[i] == 'A')
                x = 2 * x + y;
            if(s[i] == 'B')
                y = 2 * y + x;
        }
        return x + y;*/
        return pow(2,s.length());
    }
};
