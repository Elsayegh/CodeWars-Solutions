/*
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:

solution("abc", "bc"); //returns true
solution("abc", "d"); //returns false

Link: https://www.codewars.com/kata/string-ends-with/train/cpp

*/

//Solution

bool solution(std::string const &str, std::string const &ending) {

    if(str.size() >= ending.size() &&
			str.compare(str.size() - ending.size(), ending.size(), ending) == 0)
			return true;
		else
			return false;
}
