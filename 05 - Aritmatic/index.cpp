#include <iostream>

using namespace std;

int main()
{
  /*
   * @description : This is a simple program to learn about aritmatic in C++
   * @return : 0
   */

  /*
   * @conclusion :
   * 1. Aritmatic is a process of doing calculation.
   * 2. Aritmatic operators are +, -, *, /, %.
   * 3. + is used to add two numbers.
   * 4. - is used to subtract two numbers.
   * 5. * is used to multiply two numbers.
   * 6. / is used to divide two numbers.
   * 7. % is used to get the remainder of two numbers.
   */
  int firstValue = 10;
  int secondValue = 5;
  int result;
  cout << "First Value: " << firstValue << endl;
  cout << "Second Value: " << secondValue << endl;

  result = firstValue + secondValue;
  cout << "Result of Addition: " << result << endl;

  result = firstValue - secondValue;
  cout << "Result of Subtraction: " << result << endl;

  result = firstValue * secondValue;
  cout << "Result of Multiplication: " << result << endl;

  result = firstValue / secondValue;
  cout << "Result of Division: " << result << endl;

  result = firstValue % secondValue;
  cout << "Result of Modulus: " << result << endl;

  result = (firstValue + secondValue) * 2; // You can use parenthesis to change the order of calculation
  cout << "Result of List Execution: " << result << endl;

  cin.get();
  return 0;
}