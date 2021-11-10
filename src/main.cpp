#include "../include/RecursivePrimitives.hpp"
#include <iostream>

int main (int argc, char **argv) {
    if (argc != 3) {
      std::cout << "Error - 2 arguments expected." << std::endl;
    } else {
      int base = atoi(argv[1]);
      int exponent = atoi(argv[2]);
      if (base >= 0 && exponent >= 0) {
        RecursivePrimitives FPRs;
        std::cout << base << "^" << exponent << ": ";
        std::cout << FPRs.pow(base, exponent) << std::endl;
        std::cout << "Recursive calls: " << FPRs.getCalls() << std::endl;
      } else {
        std::cout << "Arguments must be natural integers or 0" << std::endl;
      }
    }
}