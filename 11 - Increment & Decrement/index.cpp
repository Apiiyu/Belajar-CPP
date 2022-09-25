#include <iostream>

using namespace std;

int main()
{
  /*
   * @description : This is a simple program to learn about Increment & Decrement in C++
   * @return : 0
   */

  /*
   * @conclusion :
   * 1. Increment have two categories, which is preincrement and postincrement
   * 2. Preincrement is increment before the variable is used
   * 3. Postincrement is increment after the variable is used
   * 4. Decrement have two categories, which is predecrement and postdecrement
   * 5. Predecrement is decrement before the variable is used
   * 6. Postdecrement is decrement after the variable is used
   */

  int firstValue = 10;
  int secondValue = 10;

  cout << "First value with post increment is " << firstValue++ << endl; // This will print 10 first, then increment
  cout << "First value with pre increment is " << ++firstValue << endl;  // This will increment first, then print 12
  cout << "First value with post decrement is " << firstValue-- << endl; // This will print 12 first, then decrement
  cout << "First value with pre decrement is " << --firstValue << endl;  // This will decrement first, then print 10

  cin.get();
  return 0;
}