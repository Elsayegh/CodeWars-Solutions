/*
Your task is to make two functions, max and min (maximum and minimum in PHP and Python) that take a(n) array/vector of integers list as input and outputs, respectively, the largest and lowest number in that array/vector.

#Examples

max({4,6,2,1,9,63,-134,566}) returns 566
min({-52, 56, 30, 29, -54, 0, -110}) returns -110
max({5}) returns 5
min({42, 54, 65, 87, 0}) returns 0
#Notes

You may consider that there will not be any empty arrays/vectors.

*/

//Solution

#include <vector>
using namespace std;

int min(vector<int> list){
    
    int min = list[0];
    for(int i=0;i<list.size();i++)
    {
      if(list[i] < min)
      {
        min = list[i];
      }
    }
    return min;
}

int max(vector<int> list){
    
   int max = list[0];
    for(int i=0;i<list.size();i++)
    {
      if(list[i] > max)
      {
        max = list[i];
      }
    }
    return max;
}
