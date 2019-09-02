/*
Create a public class called Cube without a constructor which gets one single private Integer variable Side, a getter GetSide() and
a setter SetSide(int num) method for this property. Actually, getter and setter methods are not the common way to write this code in C#.
In the next kata of this series, we gonna refactor the code and make it a bit more professional... 
Note: There's no need to check for negative values!



*/

//Solution

// Where is my cube ?

class Cube{
public:
  void SetSide(int Side){side=Side;}
  int GetSide(){return side;}
private:
  int side = 0;
};
