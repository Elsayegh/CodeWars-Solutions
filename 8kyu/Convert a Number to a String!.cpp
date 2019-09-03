/*
We need a function that can transform a number into a string.

What ways of achieving this do you know?

Examples:
number_to_string(123) // "123"
number_to_string(999) // "999"

*/

//Solution

#include <string>

std::string number_to_string(int num) {
  // your code here
  return std::to_string(num);
}
