/*
Rock Paper Scissors
Let's play! You have to return which player won! In case of a draw return Draw!.

Examples:

rps('scissors','paper') // Player 1 won!
rps('scissors','rock') // Player 2 won!
rps('paper','paper') // Draw!
*/

//Solution

#include <string>

std::string rps(const std::string& p1, const std::string& p2)
{
    if(p1 == "rock" && p2 == "scissors")
    return "Player 1 won!";
    
   else if(p1 == "scissors" && p2 == "paper")
    return "Player 1 won!";
    
    else if(p1 == "paper" && p2 == "rock")
    return "Player 1 won!";
    
    else if(p2 == "rock" && p1 == "scissors")
    return "Player 2 won!";
    
    else if(p2 == "scissors" && p1 == "paper")
    return "Player 2 won!";
    
    else if(p2 == "paper" && p1 == "rock")
    return "Player 2 won!";
    
    else return "Draw!";
}
