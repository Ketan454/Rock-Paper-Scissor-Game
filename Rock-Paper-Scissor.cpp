/*
A Simple Game
Made by Sam Kass
Made With Karen Byrla
*/
#include <iostream>
using namespace std;
int main(void) {
  srand(time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;

  cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n";
  cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n";
  cout << "|-------------------------------|\n";
  cout << "|-------------------------------|\n";
  cout << "| Rock, Paper and Scissor Game! |\n";
  cout << "|-------------------------------|\n";
  cout << "|-------------------------------|\n";
  cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n";
  cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n";

  cout << "   1) Rock.\n";
  cout << "   2) Paper.\n";
  cout << "   3) Scissor.\n";

  cout << "   It's Your Turn Now! Shoot: ";
  cin >> user;
  if(user == 1 && computer == user) {
    cout << "The Game Result: \n";
    cout << "Computer: " << computer << ".\n";
    cout << "User: " << user << ".\n";
    cout << "=*=*=*=\n";
    cout << "*=*=*=*\n";
    cout << "|-----|\n";
    cout << "|-----|\n";
    cout << "| Tie |\n";
    cout << "|-----|\n";
    cout << "|-----|\n";
    cout << "*=*=*=*\n";
    cout << "=*=*=*=\n";
  }
  else if(user == 2 && computer == user) {
    cout << "The Game Result: \n";
    cout << "Computer: " << computer << ".\n";
    cout << "User: " << user << ".\n";
    cout << "=*=*=*=\n";
    cout << "*=*=*=*\n";
    cout << "|-----|\n";
    cout << "|-----|\n";
    cout << "| Tie |\n";
    cout << "|-----|\n";
    cout << "|-----|\n";
    cout << "*=*=*=*\n";
    cout << "=*=*=*=\n";
  }
  else if(user == 3 && computer == user) {
    cout << "The Game Result: \n";
    cout << "Computer: " << computer << ".\n";
    cout << "User: " << user << ".\n";
    cout << "=*=*=*=\n";
    cout << "*=*=*=*\n";
    cout << "|-----|\n";
    cout << "|-----|\n";
    cout << "| Tie |\n";
    cout << "|-----|\n";
    cout << "|-----|\n";
    cout << "*=*=*=*\n";
    cout << "=*=*=*=\n";
  }
  else if(user == 1 && computer == 2) {
    cout << "The Game Result: \n";
    cout << "Computer: " << computer << ".\n";
    cout << "User: " << user << ".\n";
    cout << "*=*=*=*=*=*=*=*=*\n";
    cout << "=*=*=*=*=*=*=*=*=\n";
    cout << "|---------------|\n";
    cout << "|---------------|\n";
    cout << "| Computer Wins |\n";
    cout << "|---------------|\n";
    cout << "|---------------|\n";
    cout << "=*=*=*=*=*=*=*=*=\n";
    cout << "*=*=*=*=*=*=*=*=*\n";
  }
  else if(user == 2 && computer == 3) {
    cout << "The Game Result: \n";
    cout << "Computer: " << computer << ".\n";
    cout << "User: " << user << ".\n";
    cout << "*=*=*=*=*=*=*=*=*\n";
    cout << "=*=*=*=*=*=*=*=*=\n";
    cout << "|---------------|\n";
    cout << "|---------------|\n";
    cout << "| Computer Wins |\n";
    cout << "|---------------|\n";
    cout << "|---------------|\n";
    cout << "=*=*=*=*=*=*=*=*=\n";
    cout << "*=*=*=*=*=*=*=*=*\n";
  }
  else if(user == 3 && computer == 2) {
    cout << "The Game Result: \n";
    cout << "Computer: " << computer << ".\n";
    cout << "User: " << user << ".\n";
    cout << "*=*=*=*=*=*=*=*=*\n";
    cout << "=*=*=*=*=*=*=*=*=\n";
    cout << "|---------------|\n";
    cout << "|---------------|\n";
    cout << "| Computer Wins |\n";
    cout << "|---------------|\n";
    cout << "|---------------|\n";
    cout << "=*=*=*=*=*=*=*=*=\n";
    cout << "*=*=*=*=*=*=*=*=*\n";
  }
  else if(user == 1 && computer == 3) {
    cout << "The Game Result: \n";
    cout << "Computer: " << computer << ".\n";
    cout << "User: " << user << ".\n";
    cout << "*=*=*=*=*=*=*\n";
    cout << "=*=*=*=*=*=*=\n";
    cout << "|-----------|\n";
    cout << "|-----------|\n";
    cout << "| User Wins |\n";
    cout << "|-----------|\n";
    cout << "|-----------|\n";
    cout << "=*=*=*=*=*=*=\n";
    cout << "*=*=*=*=*=*=*\n";
  }
  else if(user == 2 && computer == 1) {
    cout << "The Game Result: \n";
    cout << "Computer: " << computer << ".\n";
    cout << "User: " << user << ".\n";
    cout << "*=*=*=*=*=*=*\n";
    cout << "=*=*=*=*=*=*=\n";
    cout << "|-----------|\n";
    cout << "|-----------|\n";
    cout << "| User Wins |\n";
    cout << "|-----------|\n";
    cout << "|-----------|\n";
    cout << "=*=*=*=*=*=*=\n";
    cout << "*=*=*=*=*=*=*\n";
  }
  else if(user == 3 && computer == 1) {
    cout << "The Game Result: \n";
    cout << "Computer: " << computer << ".\n";
    cout << "User: " << user << ".\n";
    cout << "*=*=*=*=*=*=*\n";
    cout << "=*=*=*=*=*=*=\n";
    cout << "|-----------|\n";
    cout << "|-----------|\n";
    cout << "| User Wins |\n";
    cout << "|-----------|\n";
    cout << "|-----------|\n";
    cout << "=*=*=*=*=*=*=\n";
    cout << "*=*=*=*=*=*=*\n";
  }
}
