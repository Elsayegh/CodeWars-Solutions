/*
Note: This kata is inspired by Convert a Number to a String!. Try that one too.

Description
We need a function that can transform a string into a number. What ways of achieving this do you know?

Note: Don't worry, all inputs will be strings, and every string is a perfectly valid representation of an integral number.

Examples
stringToNumber "1234" == 1234
stringToNumber "605"  == 605
stringToNumber "1405" == 1405
stringToNumber "-7"   == -7

*/

//Solution

int string_to_number(const std::string& s) {
  //your code here
  std::string str = s;
  std::stringstream num(str);
  int x = 0;
  num >> x;
  return x;
}
