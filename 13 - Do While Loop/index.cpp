#include <iostream>

using namespace std;

int main()
{
  /*
   * @description : This is a simple program to learn about Do While Loop in C++
   * @return : 0
   */

  /*
   * @conclusion :
   * 1. Do While loop is a loop that will execute the code inside the loop while the condition is true
   * 2. Do While loop will execute the code inside the loop at least once
   * 3. Do While loop will execute the code inside the loop until the condition is false
   */
  int index = 0;

  do
  {
    cout << "Index is " << index << endl;
    index++; // This is the same as index = index + 1
  } while (index < 5);

  cin.get();
  return 0;
}