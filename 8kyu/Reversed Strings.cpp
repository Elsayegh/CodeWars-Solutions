/*
Complete the solution so that it reverses the string value passed into it.

solution('world'); // returns 'dlrow'
*/

//Solution

#include <string>
using namespace std ; 

string reverseString (string str )
{
  // your Code is Here ... enjoy !!!
  std:string newString;
  for (int i=str.length()-1; i>=0; i--){
    newString += str[i];
  }
  return newString;
}
