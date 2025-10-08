#include <iostream>
#include <vector>
using namespace std;
class NumArray {
    vector<int> nums;
public:
    NumArray(vector<int>& nums) 
    {
        for(int i = 1; i < nums.size(); i++)
            nums[i] = nums[i]+nums[i-1];
        this->nums = nums;
    }
    
    int sumRange(int left, int right) 
    {
        if(left == 0)
            return nums[right];    
        return nums[right]-nums[left-1];
    }
};