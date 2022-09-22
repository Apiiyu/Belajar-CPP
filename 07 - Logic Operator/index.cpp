#include <iostream>

using namespace std;

int main()
{
  /*
   * @description : This is a simple program to learn about Logic Operator in C++
   * @return : 0
   */

  /*
   * @conclusion :
   * 1. Logic Operator is a process of combining two or more conditions.
   * 2. Logic Operator are &&, ||, !.
   * 3. && is used to check if both conditions are true.
   * 4. || is used to check if one of the conditions is true.
   * 5. ! is used to check if the condition is false.
   */
  int firstValue = 10;
  int secondValue = 5;
  bool result;

  cout << "First Value: " << firstValue << endl;
  cout << "Second Value: " << secondValue << endl;

  result = firstValue == 10 && secondValue == 5; 
  cout << "Result of Equal: " << result << endl;

  result = firstValue == 10 || secondValue == 1;
  cout << "Result of Not Equal: " << result << endl;

  result = !(firstValue == 10);
  cout << "Result of Greater Than: " << result << endl;

  cin.get();
  return 0;
}