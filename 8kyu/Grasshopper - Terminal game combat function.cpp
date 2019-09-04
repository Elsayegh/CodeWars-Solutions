/*
Create a combat function that takes the player's current health and the amount of damage recieved, and returns the player's new health. Health can't be less than 0.

*/

//Solution

int combat(int health, int damage){
  //Code here!
  return health > damage ? health - damage : 0;
}
