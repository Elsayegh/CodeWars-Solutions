/*
Write function RemoveExclamationMarks which removes all exclamation marks from a given string.
*/

//Solution

#include <string>
#include <algorithm>


std::string removeExclamationMarks(std::string str){
  //your code here
     for (unsigned int i = 0; i < str.length(); ++i)
   {
      // you need include <algorithm> to use general algorithms like std::remove()
      str.erase (std::remove(str.begin(), str.end(), '!'), str.end());
   }
    return str;
}
