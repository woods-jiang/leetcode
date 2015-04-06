class Solution {
public:
    int rob(vector<int> &num) {
        int sum1=0;
        int sum2=0;
        for(unsigned int i=0; i<num.size(); i++)
        {
            if(i%2==1)
            {
                sum1 = max(sum1+num[i], sum2);
            }
            else
            {
                sum2 = max(sum2+num[i], sum1);
            }
        }
        return max(sum1, sum2);
    }
};
