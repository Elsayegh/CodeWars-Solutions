/*
Convert number to reversed array of digits
Given a random number:

C#: long;
C++: unsigned long;
You have to return the digits of this number within an array in reverse order.

Example:
348597 => [7,9,5,8,4,3]

*/

//Solution

std::vector<int> digitize(unsigned long n) 
{      
    std::vector <int> num;
     while(n!=0){
        num.push_back(n%10);//fetch the LSB of the number
        n = n / 10;//right shift the number
    }
    return num;
}
