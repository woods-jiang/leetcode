class Solution {
public:
    int mySqrt(int x) {
        
        if (x == 0)
            return 0;
            
        double lastY = 0.0;
        double y = 1.0;
        
        while (y != lastY)
        {
            lastY = y;
            y = (y + x / y) / 2.0;
        }
        return (int)(y);
    }
};