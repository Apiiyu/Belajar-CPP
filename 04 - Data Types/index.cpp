#include <iostream>
#include <limits>

using namespace std;

int main()
{
  /*
   * @description : This is a simple program to learn about data types in C++
   * @return : 0
   */

  /*
   * @conclusion :
   * 1. Data types are used to define the type of data a variable can store.
   * 2. Data type integer is have size of 4 bytes or 32 bit.
   * 3. Data type long is have size of 8 bytes or 64 bit.
   * 4. Data type short is have size of 2 bytes or 16 bit.
   * 5. Data type float is have size of 4 bytes or 32 bit. It is used to store decimal values.
   * 6. Data type double is have size of 8 bytes or 64 bit. It is used to store decimal values.
   * 7. Data type char is have size of 1 byte or 8 bit. It is used to store a single character.
   * 8. Data type bool is have size of 1 byte or 8 bit. It is used to store boolean values.
   */
  int limitOfInt = numeric_limits<int>::max(); // numeric_limits is a class in limits header file which is used to get the maximum value of a data type.
  long limitOfLong = numeric_limits<long>::max();
  short limitOfShort = numeric_limits<short>::max();

  int firstValue = 10;
  float secondValue = 20.5;
  char thirdValue = 'A';
  bool fourthValue = true;

  cout << "First Value: " << firstValue << endl;
  cout << "Size of First Value: " << sizeof(firstValue) << " Bytes" << endl; // sizeof returns the size of the variable in bytes
  cout << "Limit of Integer: " << limitOfInt << endl;
  cout << "Limit of Long: " << limitOfLong << endl;
  cout << "Limit of Short: " << limitOfShort << endl;

  cout << "Second Value: " << secondValue << endl;
  cout << "Size of Second Value: " << sizeof(secondValue) << " Bytes" << endl;
  cout << "Third Value: " << thirdValue << endl;
  cout << "Size of Third Value: " << sizeof(thirdValue) << " Bytes" << endl;
  cout << "Fourth Value: " << fourthValue << endl;
  cout << "Size of Fourth Value: " << sizeof(fourthValue) << " Bytes" << endl;

  cin.get();
  return 0;
}