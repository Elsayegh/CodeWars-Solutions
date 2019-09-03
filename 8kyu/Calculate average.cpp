/*
Write function avg which calculates average of numbers in given list.


*/

//Solution

#include <vector>

double calcAverage(const std::vector<int>& v){
  // your code
    int n = 0;
    double mean = 0.0;
    for (auto x : v) {
        double delta = x - mean;
        mean += delta/++n;
    }
    return mean;
}
