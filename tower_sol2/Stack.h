#pragma once
#include "Cube.h"
#include <vector>

class Stack {
public:
  void pushBack(const Cube & cube);
  Cube removeTop();
  Cube & peekTop();
  unsigned size() const;

  friend std::ostream& operator<<(std::ostream & os, const Stack & stack);

private:
  std::vector<Cube> cubes_;
};
