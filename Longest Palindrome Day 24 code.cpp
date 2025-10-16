#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for (auto a : s) {
            mp[a]++;
        }
        vector<int> temp;

        for (const auto& pair : mp) {
            temp.push_back(pair.second);
        }
        int ans = 0;
        bool hasOdd = false;

        for(int i = 0; i<temp.size(); i++){
            if(temp[i] % 2 == 1){
                ans += temp[i] -1;
                hasOdd = true;
                
            }
            else{
                ans += temp[i];
            }


        }
        if(hasOdd) ans+=1;
        return ans;
    }
};