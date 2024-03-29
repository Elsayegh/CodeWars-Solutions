/*
Description:
Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.

Examples
replace("Hi!") === "H!!"
replace("!Hi! Hi!") === "!H!! H!!"
replace("aeiou") === "!!!!!"
replace("ABCDE") === "!BCD!"

*/

//Solution

#include <string>
#include <regex>

using namespace std;

string replace(const string &s)
{
    return regex_replace(s, regex("[aeiouAEIOU]"), "!");
}
