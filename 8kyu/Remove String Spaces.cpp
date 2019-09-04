/*
Simple, remove the spaces from the string, then return the resultant string.
*/

//Solution

std::string no_space(std::string str)
{
    //your code here
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
   return str;
}
