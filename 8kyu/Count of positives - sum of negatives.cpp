/*
Given an array of integers.

Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers.

If the input array is empty or null, return an empty array.

Example
For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65].


*/

//Solution

#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    // go for it!
    int count = 0, sum = 0; std::vector<int> output; 
    if(input.size() > 0){
    for(int i = 0; i < input.size(); i++)
    {
      if(input[i] > 0) count++;
      if(input[i] < 0) sum+= input[i];
    }
      output.push_back(count);
      output.push_back(sum);
        return output;
  }
  else
      
  return output;
    
    
}
