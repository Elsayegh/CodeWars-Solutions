/*
You are given two angles (in degrees) of a triangle.

Write a function to return the 3rd.

Note: only positive integers will be tested.
*/

//Solution

class Triangle {
public:
  static int otherAngle(int a, int b){
    return 180 - ( a + b );
  }
};
