#include <iostream>

using namespace std;

int main()
{
  /*
   * @description : This is a simple program to learn about Break and Continue in C++
   * @return : 0
   */

  /*
   * @conclusion :
   * 1. Break is a keyword that will break the loop
   * 2. Continue is a keyword that will continue the loop
   * 3. Break and Continue can be used in any loop
   */

  for (int index = 1; index <= 10; index++)
  {
    if (index == 5)
    {
      break; // Break the loop
    }

    cout << "Index is: " << index << endl;
  }

  int secondIndex = 1;
  while (secondIndex <= 10)
  {
    secondIndex++;
    if (secondIndex == 5)
    {
      continue; // Thiw will skip the code below and continue the loop
    }

    cout << "Second Index is: " << secondIndex << endl;
  }
}