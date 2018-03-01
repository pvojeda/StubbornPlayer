#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int number;
  int i;
  int win = 0;
  char letter;
  game.newGame();
  cout<<"How many times do you want to play this game?\n";
  cin>>number;

for ( i = 0; i < number; i++)
{

  cout<<"Which door do you choose? (A/B/C)\n";
  cin>>letter;
  if (letter == 'a' || letter == 'A')
  {
    game.guessDoorC();
  }
  else if (letter == 'b' || letter == 'B')
  {
    game.guessDoorC();
  }
  else
  {
    game.guessDoorC();
  }
  cout<<"Pick again for your second choice\n";
  cin>>letter;
  game.guessDoorC();
  if (game.isWinner() == true)
  {
    win++;
  }
}
cout<<" You won: "<<win<<endl;
  return 0;
}
