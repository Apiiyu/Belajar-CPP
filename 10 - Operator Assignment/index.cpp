#include <iostream>

using namespace std;

int main()
{
  /*
   * @description : This is a simple program to learn about Operator Assignment in C++
   * @return : 0
   */

  /*
   * @conclusion :
   * 1. Operator Assignment is used to assign value to variable
   * 2. Operator Assignment is used to assign value to variable with operation and variable
   */
  int firstValue = 10;
  firstValue += 10; // firstValue = firstValue + 10

  cout << "First value: \t" << firstValue << endl;

  firstValue -= 10; // firstValue = firstValue - 10
  cout << "First value: \t" << firstValue << endl;

  firstValue *= 10; // firstValue = firstValue * 10
  cout << "First value: \t" << firstValue << endl;

  firstValue /= 10; // firstValue = firstValue / 10
  cout << "First value: \t" << firstValue << endl;

  cin.get();
  return 0;
}