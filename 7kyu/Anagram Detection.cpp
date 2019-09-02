/*
An anagram is the result of rearranging the letters of a word to produce a new word (see wikipedia).

Note: anagrams are case insensitive

Complete the function to return true if the two arguments given are anagrams of theeach other; return false otherwise.

Examples
"foefet" is an anagram of "toffee"

"Buckethead" is an anagram of "DeathCubeK"


*/

//Solution
#include <string>

bool isAnagram(std::string t, std::string o){

 if(t.size() != o.size())
  return false;
  
  std::transform(t.begin(),t.end(),t.begin(),::tolower);
  std::transform(o.begin(),o.end(),o.begin(),::tolower);
  std::sort(t.begin(),t.end());
  std::sort(o.begin(),o.end());
  
  return t==o;
  
}
