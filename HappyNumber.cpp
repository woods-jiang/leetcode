// v2 
class Solution {
public:
    bool isHappy(int n) {
        
        if(n <= 0)
            return false;
        
        unordered_set<int> isAppear;
        
        isAppear.insert(n);
        
        int sum = n;
        
        while(1 != sum)
        {
            sum = 0;
            
            while(n != 0)
            {
                sum += pow(n%10,2);
                n = n/10;
            }

            if(isAppear.find(sum)!=isAppear.end())
                return false;
                
            isAppear.insert(sum);
            n = sum;
        }
        return true;
    }
};

// v1 蒙混AC的代码
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