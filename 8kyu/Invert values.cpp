/*
Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.

invert([1,2,3,4,5]) == [-1,-2,-3,-4,-5]
invert([1,-2,3,-4,5]) == [-1,2,-3,4,-5]
invert([]) == []
*/

//Solution
#include <vector>

std::vector<int> invert(std::vector<int> values)
{
    for(int i = 0; i < values.size(); i++)
       values[i] = -values[i];
       return values;
}
