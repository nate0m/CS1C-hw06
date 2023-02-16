#include "reverse.h"
#include <iostream>

int main () {

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
