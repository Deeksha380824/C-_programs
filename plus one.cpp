class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int carry=0,i=digits.size()-1;
      do{
          if(i==digits.size()-1)
          {
              digits[i]+=1;
          }
          digits[i]+=carry;
          carry=digits[i]/10;
          digits[i]%=10;
          i--;
      }
      while(i>=0&&carry!=0);
      if(carry!=0)
      {
          digits.insert(digits.begin(),carry);
      }

        return digits;
    }
};