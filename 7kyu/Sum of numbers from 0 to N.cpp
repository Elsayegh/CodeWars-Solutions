/*
Description:

We want to generate a function that computes the series starting from 0 and ending until the given number following the sequence:

0 1 3 6 10 15 21 28 36 45 55 ....

which is created by

0, 0+1, 0+1+2, 0+1+2+3, 0+1+2+3+4, 0+1+2+3+4+5, 0+1+2+3+4+5+6, 0+1+2+3+4+5+6+7 etc..

Input:

LastNumber

Output:

series and result

Example:
Input:

> 6
Output:

0+1+2+3+4+5+6 = 21

Input:

> -15
Output:

-15<0

Input:

> 0
Output:

0=0


*/

//Solution

#include <sstream>
#include <string>

using namespace std;

class SequenceSum{
  int count;
  public:
  SequenceSum (int);
  string showSequence();
};

SequenceSum::SequenceSum (int c) {
  count = c;
}

string SequenceSum::showSequence(){
    if (count < 0) return to_string(count) + "<0";
    if (!count) return "0=0";
    stringstream ss; ss << 0;
    for (int i = 1; i <= count; ++i)
      ss << '+' << i;
    ss << " = " << count * (count+1) / 2;
    return ss.str();
}
