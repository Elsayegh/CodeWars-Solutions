/*
In this little assignment you are given a string of space separated numbers, and have to return the highest and lowest number.

Example:

highAndLow("1 2 3 4 5");  // return "5 1"
highAndLow("1 2 -3 4 5"); // return "5 -3"
highAndLow("1 9 3 4 -5"); // return "9 -5"
Notes:

All numbers are valid Int32, no need to validate them.
There will always be at least one number in the input string.
Output string must be two numbers separated by a single space, and highest number is first.

*/

//Solution

#include <string>

std::string highAndLow(const std::string& numbers){
  //your code here
  std::stringstream ss(numbers);
  int temp, min = std::numeric_limits<int>::max(), max = std::numeric_limits<int>::min();
  
  while(ss >> temp){
    min = (temp < min) ? temp : min;
    max = (temp > max) ? temp : max;
  };
  
  return std::to_string(max) + " " + std::to_string(min);
}
