#include <iostream>

using namespace std;

int main()
{
  int firstValue; // Declare firstValue
  firstValue = 5; // Assign / Initialize 5 to firstValue
  cout << firstValue << endl;

  string userName;
  cout << "Enter your name: ";
  cin >> userName; // Get user input from the keyboard
  cout << "Hello " << userName << endl;

  cin.get();
  return 0;
}