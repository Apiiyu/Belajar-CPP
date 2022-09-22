#include <iostream>

using namespace std;

int main () {
  /*
   * @description : This is a simple program to learn build simple calculator in C++
   * @return : 0
   */
  float firstNumber, secondNumber, result;
  char operation;

  cout << "Welcome to simple program of calculator \n \n";
  cout << "Enter first number : ";
  cin >> firstNumber;

  cout << "Choose operation (+, -, *, /) : ";
  cin >> operation;

  cout << "Enter second number : ";
  cin >> secondNumber;

  cout << "\nThe result of " << firstNumber << " " << operation << " " << secondNumber << " is ";
  
  switch (operation) {
    case '+':
      result = firstNumber + secondNumber;
      cout << result;
      break;
    case '-':
      result = firstNumber - secondNumber;
      cout << result;
      break;
    case '*':
      result = firstNumber * secondNumber;
      cout << result;
      break;
    case '/':
      result = firstNumber / secondNumber;
      cout << result;
      break;
    default:
      cout << "Invalid operation";
      break;
  }

  cin.get();
  return 0;
}