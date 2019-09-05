/*
Write function makeUpperCase.


*/

//Solution

#include <string>

std::string makeUpperCase (const std::string& input_str)
{
  std::string str = input_str;
  std::transform(str.begin(), str.end(),str.begin(), ::toupper);
  return str;
}
