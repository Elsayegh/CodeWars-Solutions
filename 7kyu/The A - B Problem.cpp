/*
Vicky isn't good at arithmetic. He is given a simple problem to solve : What is (A - B) equal to ?

Surprisingly, his answer is wrong. To be more precise, his answer has exactly one wrong digit.

1 < B < A

Your Task
Write a function problem(A,B) that returns a wrong answer of A - B. Your answer must be a positive integer containing the same number of digits as the correct answer, and exactly one digit must differ from the correct answer. Leading zeros are not allowed. If there are multiple answers satisfying the above conditions, anyone will do.

Example
problem(5858,1234) => 1624

The correct answer of 5858-1234 is 4624. So, for instance, 2624, 4324, 4623, 4604 and 4629 will be accepted, but 0624, 624, 5858, 4624 and 04624 will be rejected.


*/

//Solution

static int problem(int A, int B){
  return (A-B)^1;
}
