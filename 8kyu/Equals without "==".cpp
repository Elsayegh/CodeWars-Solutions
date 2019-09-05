/*
Your task is to write a function bool equals(int a, int b) what returns same result as a == b, but you must not use == operator.

To check that, the test case will search = character in your solution. So don't use it even in comments.
*/

//Solution

bool equals(int a, int b){
  return a ^ b ? false: true;
}
