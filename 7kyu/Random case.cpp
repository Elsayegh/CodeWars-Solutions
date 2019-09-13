/*
Write a function that will randomly upper and lower characters in a string - randomCase() (random_case() for Python).

A few examples:

randomCase("Lorem ipsum dolor sit amet, consectetur adipiscing elit") == "lOReM ipSum DOloR SiT AmeT, cOnsEcTEtuR aDiPiSciNG eLIt"

randomCase("Donec eleifend cursus lobortis") == "DONeC ElEifEnD CuRsuS LoBoRTIs"
Note: this function will work within the basic ASCII character set to make this kata easier - so no need to make the function multibyte safe.


*/

//Solution

#include <string>
using namespace std;


std::string randomCase(std::string x)
{
  std::string result;

  for (char a : x)
  {
    result += rand()%2 ? tolower(a) : toupper(a);
  }
  return result;
}
