#include "Stack.h"
#include <iostream>

void Stack::pushBack(const Cube & cube){
  Cube & cube_top = peekTop();
  if (size() > 0 && cube.getLength() > cube_top.getLength()){
    std::cerr << "A smaller cube can not be placed on top of a larger cube." << std::endl;
    std::cerr << "Tried to add cube of length: " << cube.getLength() << std::endl;
    std::cerr << "Current stack: " << *this  << std::endl;

    throw std::runtime_error("A smaller cube can not be placed on top of a larger cube.");
  }
  cubes_.push_back(cube);
}
Cube Stack::removeTop(){
  Cube cube = peekTop();
  cubes_.pop_back();
  return cube;
}
Cube & Stack::peekTop(){
  return cubes_[cubes_.size()-1];
}
unsigned Stack::size() const {
  return cubes_.size();
}
std::ostream& operator<<(std::ostream & os, const Stack & stack) {
  for (unsigned i = 0; i < stack.size(); i++){
    os << stack.cubes_[i].getLength() << " ";
  }
  os << std::endl;
  return os;
}
