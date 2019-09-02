/*
Given a string of digits, you should replace any digit below 5 with '0' and any digit 5 and above with '1'. Return the resulting string.


*/

//Solution

#include <string>
#include <regex>
using namespace std;
string fakeBin(string str){
str = regex_replace(str, regex("[1234]"), "0");
str = regex_replace(str, regex("[56789]"), "1");
  return str;
}
