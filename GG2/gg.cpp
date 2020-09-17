#include <iostream>
#include <ctime>

using namespace std;

int main() {

  cout << "Please guess a number between 1-100" << endl;
  srand(time(NULL));
  int random = rand()%(100) + 1;
  cout << random << endl;

  int rounds = 0;
  int input = 0;

  while (input != random){
    cin >> input;
    rounds++;
    if (input < random){
      cout << "Too low!" << endl;
    }
    if (input > random){
      cout << "Too high!" << endl;
    }
    if (input == random){
      cout << "You got it!" << endl;
      cout << "Rounds: " << rounds << endl;
    }
  }
}
