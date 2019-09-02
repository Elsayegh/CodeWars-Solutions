/*
Given an array of integers, return a new array with each value doubled.

For example:

[1, 2, 3] --> [2, 4, 6]

For the beginner, try to use the map method - it comes in very handy quite a lot so is a good one to know.

FUNDAMENTALSARRAYSNUMBERS

*/

//Solution

std::vector<int> maps(const std::vector<int> & values) {

  std::vector<int> value = values;
  for(int i = 0; i < value.size(); i++)
  {
    value[i] *= 2;
  }
  return value;
}
