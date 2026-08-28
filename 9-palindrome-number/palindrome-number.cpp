class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int res = 0;
        int org = x;
        while(x>0){
            int digit = x%10;
            x /= 10;
            if((res-digit)/10 > INT_MAX){
                res = 0;
            }
            res = (res*10) + digit;
        }
        if(res == org){
            return true;
        }
        return false;
    }
};