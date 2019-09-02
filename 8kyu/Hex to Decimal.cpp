/*
Complete the function which converts hex number (given as a string) to a decimal number.


*/

//Solution

int hexToDec(std::string hexString)
{
    int x;
    std::stringstream ss;
    ss << std::hex << hexString;
    ss >> x;
    return x;
}
