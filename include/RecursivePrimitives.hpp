#ifndef __RECURSIVEPRIMITIVES_H__
#define __RECURSIVEPRIMITIVES_H__

#include <iostream>
#include <vector>

class RecursivePrimitives {
  private:
   int calls;

  public:
    RecursivePrimitives();
    int getCalls();

    // Basic
    int proyect(int index, std::vector<int> vector);
    int zero(int x);
    int sucessor(int x);
    
    // Defined
    int one(int x);
    int id(int x);
    int predecessor(int x);
    int add(int x, int y);
    int mult(int x, int y);
    int reversePow(int x, int y);
    int pow(int x, int y);
};
#endif // __RECURSIVEPRIMITIVES_H__