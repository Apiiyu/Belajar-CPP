#include <iostream>

using namespace std;

int main()
{
  /*
   * @description : This is a simple program to learn about Conditional Statements in C++
   * @return : 0
   */

  /*
   * @conclusion :
   * 1. Conditional Statements is a process of executing a block of code if a condition is true.
   * 2. Conditional Statements are if, if else, else if, switch.
   */
  int mathScore = 80;
  float englishScore = 90;
  char grade;
  float result = (mathScore + englishScore) / 2;

  if (result >= 90)
  {
    grade = 'A';
    cout << "You are passed with score: " << result << endl;
  }
  else if (result >= 80)
  {
    grade = 'B';
    cout << "You are passed with score: " << result << endl;
  }
  else
  {
    grade = 'C';
    cout << "You are failed with score: " << result << endl;
  }

  switch (grade)
  {
  case 'A':
    cout << "Execellent!, You are passed with grade: " << grade << endl;
    break;
  case 'B':
    cout << "Good!, You are passed with grade: " << grade << endl;
    break;
  default:
    cout << "You are failed with grade: " << grade << endl;
    break;
  }

  cin.get();
  return 0;
}