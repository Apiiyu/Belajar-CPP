//
// Created by btsid on 9/10/2022.
//

#include "iostream"

using namespace std;

int main() {
    /*
     * @description : This is a simple program to print "Hello World" in C++
     * @return : 0
     */

    /*
     * @conclusion :
     * 1. cout is a function that is used to print something on the screen.
     * 2. endl is a function that is used to print a new line. (but you also can use "\n" to create a new line)
     * 3. << is a function that is used to concatenate the string.
     * 4. cin is a function that is used to get input from the user.
     * 5. cin.get() is a function that is used when user press enter to continue the program.
     */

    cout << "Hello, World!" << endl;
    cout << "Hello, C++ \n"; // You can use "\n" to create a new line
    cout << "Hello, without endl ";
    cout << "This line is printed without a new line" << endl;

    cin.get(); // This is used to wait for the user to press enter to continue the program
    return 0;
}
