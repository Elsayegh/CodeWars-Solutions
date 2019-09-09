/*
A rectangle is can be defined by two factors: height and width.

Its area is defined as the multiplication of the two: height * width.

Its perimeter is the sum of its four edges: height + height + width + width.

It is possible to create rectangles of the same area but different perimeters. For example, given an area of 45, the possible heights, widths and resultant perimeters would be:

(1, 45) = 92

(9, 5) = 28

(15, 3) = 36

The task is to write a function that, given an area as a positive integer, returns the smallest perimeter possible that is also an integer.


*/

//Solution

#include <algorithm>
int minimumPerimeter (int area)
{
  int side = 0, minPerimeter = INT_MAX;
  while(side++ != area/2)
  {
    if(area % side == 0)
    {
      minPerimeter = std::min(minPerimeter, (2 * (side + area/side)));
    }
  }
  
  return minPerimeter;
}
