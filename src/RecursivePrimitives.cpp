#include "../include/RecursivePrimitives.hpp"

RecursivePrimitives::RecursivePrimitives() {
  calls = 0;
}

int RecursivePrimitives::getCalls() 
{
  return calls;
}

int RecursivePrimitives::proyect(int position, std::vector<int> list) {
  calls++;
  return list[position - 1];
}

int RecursivePrimitives::zero(int x) {
  calls++;
  return 0;
}

int RecursivePrimitives::sucessor(int x) {
  calls++;
  return x + 1;
}

int RecursivePrimitives::one(int x) {
  calls++;
  return sucessor(zero(x));
}

int RecursivePrimitives::id(int x) {
  calls++;
  int result;
  if (x == 0) {
    result = zero(x);
  }
  else {
    result = sucessor(id(x - 1));
  }
  return result;
}

int RecursivePrimitives::predecessor(int x) {
  calls++;
  int result;
  if (x == 0) {
    result = zero(x);
  }
  else {
    result = id(x - 1);
  }
  return result;
}

int RecursivePrimitives::add(int x, int y) {
  calls++;
  int result;
  if (x == 0) {
    result = id(y);
  }
  else {
    result = sucessor(add(x - 1, y));
  }
  return result;
}

int RecursivePrimitives::mult(int x, int y) {
  calls++;
  int result;
  if (x == 0) {
    result = zero(x);
  }
  else {
    result = add(mult(x - 1, y), id(y));
  }
  return result;
}

int RecursivePrimitives::pow(int x, int y) {
  calls++;
  int result;
  if (y == 0) {
    result = one(x);
  }
  else {
    result = mult(pow(x, y - 1), id(x));
  }
  return result;
}

