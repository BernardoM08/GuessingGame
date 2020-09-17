#include <iostream>
#include <ctime>

using namespace std;

int main() {

  cout << "Please guess a number between 1-100" << endl;
  bool running = true;
  
  while (running == true) {
    srand(time(NULL));
    int random = rand()%(100) + 1;

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
    cout << "Do you still want to play? y/n" << endl;
    char yn = 'a';
    cin >> yn;
    if (yn == 'y'){
      running = true;
    }
    else if (yn == 'n') {
      cout << "Thank you for playing!" << endl;
      running = false;
    }
    else {
      cout << "Please choose. y/n" << endl;
    }
  }
}
