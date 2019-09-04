/*
Create a function that finds the integral of the expression passed.

In order to find the integral all you need to do is add one to the exponent (the second number), and divide the coefficient by that new number (the first number).

In 3x^2, for example, the integral would be 1x^3 (we added 1 to the exponent, and divided the coefficient by that new number).

integrate(3,2) // => "1x^3"
integrate(12,5) // => "2x^6"
Note that the output should be a string. The coefficient is always positive, and the result will always be an integer. Neither number will ever be 0.



*/

//Solution

#include <string>
std::string integrate(const int& coefficient,const int& exponent){
  //your code here
  int exp = exponent; int ceof = coefficient;
  return std::to_string(ceof/(exp + 1) )  + "x^" +  std::to_string((exp + 1));
}
