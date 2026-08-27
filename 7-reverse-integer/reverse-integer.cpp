#include<bits/stdc++.h>
class Solution {
public:
    int reverse(int x) {
        signed int res =0;
        if(x>0 && x <= (pow(2,31)-1)){
            while(x>0){
                int digit = x % 10;
                if (res > (INT_MAX - digit) / 10){// || res < (INT_MIN - digit) / 10) {
                    return 0;
                }
                res = (res * 10) + digit;
                x /= 10;
            }
        }else{
            while(x<0 && x > pow(-2,31)){
                int digit = x % 10;
                if(res < (INT_MIN - digit) / 10){
                    return 0;
                }
                res = (res * 10) + digit;
                x /= 10;
            }
        }
        // if(res >= (pow(2,31)-1) && res < pow(-2,31)){
        //     return 0;
        // }else{
        return res;
        // }
    }
};