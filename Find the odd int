/*
Given an array, find the int that appears an odd number of times.

There will always be only one integer that appears an odd number of times.

Link: https://www.codewars.com/kata/find-the-odd-int/train/cpp

*/

//Solution

int findOdd(const std::vector<int>& numbers){
  //your code here
  int count = 0;
	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = 0; j < numbers.size(); j++)
		{
			if (numbers[i] == numbers[j])
				  count++; 
		};
    if(count % 2 != 0)
      return numbers[i];
  };
}
