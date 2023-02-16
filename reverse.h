#ifndef _REVERSE_H
#define _REVERSE_H

#include <string>
using namespace std;

// PRECONDITION  - the function takes in the starting and ending place that will be reversed as well as the string of characters by reference
// POSTCONDITION - reverses the characters according to start and end point 
void reverseString(string& characters, int start, int end);

// used to unreverse the string after being reversed. 
void unreverseString(string& characters, int start, int end);



#endif
