/*
You will be given an vector of string(s). You must sort it alphabetically (case-sensitive!!) and then return the first value.

The returned value must be a string, and have "***" between each of its letters.

You should not remove or add elements from/to the array.
*/


//Solution

std::string twoSort(std::vector<std::string> s)
{
    sort(s.begin(), s.end());
    std::string result;
    
    for (int i = 0; i< s[0].length(); i++)
    {
      result += s[0][i];
      if(i != s[0].length()-1) result += "***";
    }
    return result;
}
