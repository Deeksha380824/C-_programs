class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
         long long rev =0;
         int digit;
         int temp=x;
        while(x!=0)
         {
         digit=x%10;
         rev=rev * 10 + digit;
         x=x/10;
        }
         if(rev==temp)
         {
             return true;
         }
         return false;
    }
};
        
