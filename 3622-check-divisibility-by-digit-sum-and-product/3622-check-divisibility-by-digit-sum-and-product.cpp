class Solution {
public:
    bool checkDivisibility(int n) {
        
        int sum=0,product=1;
        int m=n;
        while(m!=0)
        {
            int digit=m%10;
            sum+=digit;
            product*=digit;
            m/=10;
        }
        return (n%(sum+product)==0);
    }
};