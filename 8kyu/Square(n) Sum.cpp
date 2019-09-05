/*
Complete the square sum function so that it squares each number passed into it and then sums the results together.

For example, for [1, 2, 2] it should return 9 because 1^2 + 2^2 + 2^2 = 9.
*/

//Solution

#include <vector>

int square_sum(const std::vector<int>& numbers)
{
    int sum = 0;
    std::vector<int> nums = numbers;
    for(int i = 0; i < nums.size(); i++)
    {
      nums[i] = nums[i] * nums[i];
      sum += nums[i];
    }
    
    return sum;
}
