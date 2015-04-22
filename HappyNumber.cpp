class Solution {
public:
    bool isHappy(int n) {
        
        int count = 10;     // 设置10次居然都能AC，不过还是设置大一点好些吧
        
        while(count--)
        {
            long long sum = 0;
            
            while(n!=0)
            {
                sum += pow(n%10,2);
                n = n/10;
            }
            
            n = sum;
            
            if(1 == sum)
                return true;
        }
        
        return false;
    }
};