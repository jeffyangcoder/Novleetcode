class Solution {
public:
    int mySqrt(int x) {
        if(!x)
            return 0;
        for (long int i = 0; i<= x ; i ++)
        {
            if( i * i > x)
                return i - 1;
        }
        return 1;
    }
};
