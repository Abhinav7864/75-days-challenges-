#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) return false;

        unordered_map<char, int> freq1, freq2;
        for (char c : word1) freq1[c]++;
        for (char c : word2) freq2[c]++;

        if (freq1.size() != freq2.size()) return false;

        for (const auto& [c, count] : freq1) {
            if (freq2.find(c) == freq2.end()) return false;
        }

        vector<int> counts1, counts2;
        for (const auto& [c, count] : freq1) counts1.push_back(count);
        for (const auto& [c, count] : freq2) counts2.push_back(count);

        sort(counts1.begin(), counts1.end());
        sort(counts2.begin(), counts2.end());

        return counts1 == counts2;
    }
};