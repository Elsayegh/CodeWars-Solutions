/*
I'm new to coding and now I want to get the sum of two arrays...actually the sum of all their elements. I'll appreciate for your help.

P.S. Each array includes only integer numbers. Output is a number too.


*/

//Solution

#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {

  int sum = 0;
  for(int i = 0; i < a.size(); i++)
  {
    sum += a[i];
  }
  
  for(int k = 0; k < b.size(); k++)
  {
    sum += b[k];
  }
  
  return sum; // something went wrong
  
}
