/*
Is the string uppercase?
Task
Create a function is_uppercase() to see whether the string is ALL CAPS. For example:

is_uppercase("c") == false
is_uppercase("C") == true
is_uppercase("hello I AM DONALD") == false
is_uppercase("HELLO I AM DONALD") == true
is_uppercase("ACSKLDFJSgSKLDFJSKLDFJ") == false
is_uppercase("ACSKLDFJSGSKLDFJSKLDFJ") == true

*/

//Solution

#include <iostream>
#include <string>
#include <algorithm>

bool is_uppercase(const std::string &s) {
    for (size_t i = 0; i < s.length(); ++i)
    if (std::islower(s[i]))
      return false;
  return true; 
}
