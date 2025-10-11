#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string removeStars(string s) 
    {
        // String to store the final answer.
        string ans = "";
        // Traversing the string
        for (int i = 0; i < s.size(); i++)
        {
            // If we encounter a star we pop the last character from the answer string.
            if (s[i] == '*')
            {
                if (!ans.empty())
                    ans.pop_back();
            }
            // Else we add the character to the answer string.
            else
                ans.push_back(s[i]);
        }
        // Return the final answer.
        return ans;
    }
};