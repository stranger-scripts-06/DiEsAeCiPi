#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=1903 lang=cpp
 *
 * [1903] Largest Odd Number in String
 */

// @lc code=start
class Solution {
public:
    string largestOddNumber(string num) {

        int n = num.length();

        for(int i=n-1;i>=0;i++){

            int s = num.length();

            if(num[i]=='9'||num[i]=='7'||num[i]=='5'||num[i]=='3'||num[i]=='1'){
                return num;
            }
            else num.erase(num.begin()+n);
        }
        return " ";
    }
};
// @lc code=end

