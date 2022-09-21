#include <iostream>

int main()
{
  /*
   * @description : This is a simple program to learn about variables in C++
   * @return : 0
   */

  /*
   * @conclusion :
   * 1. Variables are used to store data.
   * 2. Variables are used to store data of different types.
   */
  int firstValue, secondValue;
  firstValue = 10;
  secondValue = 20;

  std::cout << "First Value: " << firstValue << std::endl;
  std::cout << "Second Value: " << secondValue << std::endl;
  std::cout << "Sum of First and Second Value: " << firstValue + secondValue << std::endl;

  std::cin.get();
}