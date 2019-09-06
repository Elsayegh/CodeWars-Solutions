/*
Introduction
The GADERYPOLUKI is a simple substitution cypher used in scouting to encrypt messages. The encryption is based on short, easy to remember key. The key is written as paired letters, which are in the cipher simple replacement.

The most frequently used key is "GA-DE-RY-PO-LU-KI".

 G => A
 g => a
 a => g
 A => G
 D => E
  etc.
The letters, which are not on the list of substitutes, stays in the encrypted text without changes.

Task
Your task is to help scouts to encrypt and decrypt thier messages. Write the Encode and Decode functions.

Input/Output
The input string consists of lowercase and uperrcase characters and white . The substitution has to be case-sensitive.

Example
 Encode("ABCD")          // => GBCE 
 Encode("Ala has a cat") // => Gug hgs g cgt 
 Encode("gaderypoluki"); // => agedyropulik
 Decode("Gug hgs g cgt") // => Ala has a cat 
 Decode("agedyropulik")  // => gaderypoluki
 Decode("GBCE")          // => ABCD

*/

//Solution

#include <map>
#include <string>
#include <algorithm>

using namespace std;

std::string transform (const std::string& s)
{
    map<char, char> m =
    {
    {'G', 'A'}, {'A', 'G'}, {'D', 'E'}, {'E', 'D'},
    {'R', 'Y'}, {'Y', 'R'}, {'P', 'O'}, {'O', 'P'},
    {'L', 'U'}, {'U', 'L'}, {'K', 'I'}, {'I', 'K'},
    {'g', 'a'}, {'a', 'g'}, {'d', 'e'}, {'e', 'd'},
    {'r', 'y'}, {'y', 'r'}, {'p', 'o'}, {'o', 'p'},
    {'l', 'u'}, {'u', 'l'}, {'k', 'i'}, {'i', 'k'},
    };
    string str = s;
    std::map<char, char>::iterator it;
    string::iterator it1 = str.begin();
    string::iterator it2 = str.begin();
    while (it1 < str.end()) {
        it = m.find(*it1);
        if (it != m.end())
            *it2 = it->second;
        else
            *it2 = *it1;
        it1++; it2++;
    }
    return str;
}
std::string encode (const std::string& str)
{
    return transform(str);
}
std::string decode (const std::string& str)
{
    return  transform(str);
}
