/*
class Solution {
public:
    int countDigits(int num) {
        int original=num;
        int count=0;
        while(num>0)
        {
            int n=num%10;
            if(original%n==0)
            {
                count++;
            }
            num=num/10;
        }
        return count;
        
    }
};
