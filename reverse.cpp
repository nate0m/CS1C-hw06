#include "reverse.h"

void reverseString(string& characters, int start, int end) {

    if(start >= end)
        return;

    // loading the first character into a temp variable than swapping the first and last 
    // characters with the use of temp.
    char temp = characters[start];
    characters[start] = characters[end];
    characters[end] = temp;

    // start and end have 1 added and subtracted to them everytime the function is recalled from the function
    reverseString(characters, start + 1, end - 1);
}
void unreverseString(string& characters, int start, int end) {

    if(end >= start)
        return;

    char temp = characters[end];
    characters[end] = characters[start];
    characters[start] = temp;
    
    unreverseString(characters, start - 1, end + 1);
}
