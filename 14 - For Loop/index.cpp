#include <iostream>

using namespace std;

int main()
{
  /*
   * @description : This is a simple program to learn about For Loop in C++
   * @return : 0
   */

  /*
   * @conclusion :
   * 1. For loop is a loop that will execute the code inside the loop while the condition is true
   * 2. For loop will execute the code inside the loop until the condition is false
   * 3. For loop have three parts, which is initialization, condition, and increment/decrement
   * 4. Initialization is the first part of the for loop, which is the variable that will be used in the loop
   * 5. Condition is the second part of the for loop, which is the condition that will be checked
   * 6. Increment/Decrement is the third part of the for loop, which is the increment that will be executed after the code inside the loop is executed
   */

  for (int index = 0; index < 5; index++)
  {
    cout << "Index is " << index << endl;
  }

  cin.get();
  return 0;
}