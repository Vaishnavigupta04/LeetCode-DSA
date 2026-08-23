class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
           
        long long n = 0;
        long long apples = 0;
        
        while (apples < neededApples) {
            n++;
            
            apples = 2 * n * (n + 1) * (2 * n + 1);
        }
        
        return 8 * n;
    }
};