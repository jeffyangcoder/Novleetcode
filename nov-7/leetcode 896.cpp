class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool increase = true;
        bool decrease = true;

        for(int i = 0;i< A.size() - 1; i++)
        {
            if(A.at(i) > A.at(i + 1))
                increase = false;
            else if(A.at(i) < A.at(i + 1))
                decrease = false;

            if(!increase && !decrease)
                return false;
        }
        return true;
    }
};
