#include "reverse.h"
#include <iostream>

// programes uses function that reverses the characters of a string
// the function takes in the starting and ending character that will be reverses
// the function reverses the string by editing it via reference

int main () {

    // output  for class heading
	cout << "***********************************\n";
	cout << "Programmed By: Nathan Milton\n";
	cout << "Student Id   : 1204398\n";
	cout << "Assignment   : HW06\n";
	cout << "CS1C         : T/TH 1:30\n";
 	cout << "***********************************\n" << endl;

    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    reverseString(alphabet, 11, 18);
    cout << alphabet << endl;
    unreverseString(alphabet, 18, 11);

    reverseString(alphabet, 4, 22);
    cout << alphabet << endl;
    unreverseString(alphabet, 22, 4);

    reverseString(alphabet, 0, 25);
    cout << alphabet << endl;
    unreverseString(alphabet, 25, 0);



    return 0;
}
