class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        if(num==0)
        return true;
        
        for(int i=1;i<=num;i++){
             int j=i;
             int ans=0;
             while(j!=0)
             {
                int digit = j%10;
                ans=ans*10+digit;
                j=j/10;
             } 
                if(ans+i==num)
                    return true;

        }
        return false;
        
    }
};