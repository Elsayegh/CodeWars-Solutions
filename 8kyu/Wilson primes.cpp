/*

Wilson primes satisfy the following condition. Let P represent a prime number.

Then ((P-1)! + 1) / (P * P) should give a whole number.

Your task is to create a function that returns true if the given number is a Wilson prime.
*/

//Solution



bool amIWilson(unsigned n) {
  // Check if a number is a Wilson prime
   return n == 5 || n == 13 || n == 563;
}
