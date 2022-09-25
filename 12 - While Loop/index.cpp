#include <iostream>

using namespace std;

int main()
{
  /*
   * @description : This is a simple program to learn about While Loop in C++
   * @return : 0
   */

  /*
   * @conclusion :
   * 1. While loop is a loop that will execute the code inside the loop while the condition is true
   * 2. While loop will execute the code inside the loop at least once
   * 3. While loop will execute the code inside the loop until the condition is false
   */
  int index = 0;

  while (index < 5)
  {
    cout << "Index is " << index << endl;
    index++; // This is the same as index = index + 1
  }

  cin.get();
  return 0;
}