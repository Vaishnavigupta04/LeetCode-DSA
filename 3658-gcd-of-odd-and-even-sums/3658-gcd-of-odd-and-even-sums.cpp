class Solution {
public:
    int gcdOfOddEvenSums(int n) {

        int sumOdd= n*n;
        int sumEven=n*(n+1);
        int gcd=1,small;
        if(sumOdd>sumEven)
        small=sumEven;
        else
        small=sumOdd;
        for(int i=2;i<=small;i++){
            if(sumOdd%i==0 && sumEven%i==0)
            {
                gcd=i;
            }
        }
return gcd;
    

        
    }
};