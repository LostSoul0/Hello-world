#include <iostream>             // Input / Output Stream - std::cout (not a function)
                                // Output: <<
                                // Input:  >>
#include <stdio.h>              // STanDard Input / Output - printf (function)
//#include <cstdio>             // or newer liblary DO NOT INCLUDE BOTH

int main() {                    // Function which is executed on start, all varaibles and function should be inside this function
  std::cout << "Hello world!";  // 1st way with iostream
  printf("Hello world!");       // 2nd way with stdio
  system("pause");              // Optionally you can pasue script to be able to see "Hello world", otherwise script will instantly exit program after ending main function
  return 0;                     // Every non-void functions must return something, and 0 means "no errors"
                                // Without this there could be an error returned... with no errrors at all
}
