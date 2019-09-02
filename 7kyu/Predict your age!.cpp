/*

My grandfather always predicted how old people would get, and right before he passed away he revealed his secret!

In honor of my grandfather's memory we will write a function using his formula!

Take a list of ages when each of your great-grandparent died.
Multiply each number by itself.
Add them all together.
Take the square root of the result.
Divide by two.
Example
predictAge(65, 60, 75, 55, 60, 63, 64, 45) === 86
Note: the result should be rounded down to the nearest integer.

Some random tests might fail due to a bug in the JavaScript implementation. Simply resubmit if that happens to you.


*/

//Solution
#include <math.h>
int predictAge(int age1, int age2, int age3, int age4, int age5, int age6, int age7, int age8)
{
  std::vector<int> ages { age1, age2, age3, age4, age5, age6, age7, age8 };
  int sum = 0;
  int sqrRoot;
  int result = 0;
  for(int i = 0; i <= ages.size(); i++)
  {
    ages[i] *= ages[i];
    sum += ages[i];
      
  }
  
  sqrRoot = sqrt(sum);
    result = sqrRoot / 2;
  return result;
}
