class Solution {
public:
    bool isHappy(int n) {
        int sum;
       while(n>9)
       {
        sum=0;
        while(n)
        {
        int rem=n%10;
        sum+=rem*rem;
        n=n/10;
        }
         n=sum;
        
       }
       if(n==1||n==7)
       {
        return true;
       }
       return false;
    }
};