/*
All Star Code Challenge #18

Create a function called that accepts 2 string arguments and returns an integer of the count of occurrences the 2nd argument is found in the first one.

If no occurrences can be found, a count of 0 should be returned.

strCount('Hello', 'o') // => 1
strCount('Hello', 'l') // => 2
strCount('', 'z')      // => 0
Notes:

The first argument can be an empty string
The second string argument will always be of length 1

*/

//Solution

#include <string>

unsigned int strCount(std::string word, char letter){
  //your code here
  int count = 0;
  for(int i = 0; i < word.length(); i++)
  {
    if(word[i] == letter)
    {
      count++;
    }
  }
  
  return count;
}
