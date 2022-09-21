#include <iostream>

using namespace std;

int main()
{
  /*
   * @description : This is a simple program to learn about comparasion in C++
   * @return : 0
   */

  /*
   * @conclusion :
   * 1. Comparasion is a process of comparing two values.
   * 2. Comparasion operators are ==, !=, >, <, >=, <=.
   * 3. == is used to check if two values are equal.
   * 4. != is used to check if two values are not equal.
   * 5. > is used to check if the first value is greater than the second value.
   * 6. < is used to check if the first value is less than the second value.
   * 7. >= is used to check if the first value is greater than or equal to the second value.
   * 8. <= is used to check if the first value is less than or equal to the second value.
   */
  int firstValue = 10;
  int secondValue = 5;
  bool result;
  cout << "First Value: " << firstValue << endl;
  cout << "Second Value: " << secondValue << endl;

  result = firstValue == secondValue;
  cout << "Result of Equal: " << result << endl;

  result = firstValue != secondValue;
  cout << "Result of Not Equal: " << result << endl;

  result = firstValue > secondValue;
  cout << "Result of Greater Than: " << result << endl;

  result = firstValue < secondValue;
  cout << "Result of Less Than: " << result << endl;

  result = firstValue >= secondValue;
  cout << "Result of Greater Than or Equal: " << result << endl;

  result = firstValue <= secondValue;
  cout << "Result of Less Than or Equal: " << result << endl;

  cin.get();
  return 0;
}