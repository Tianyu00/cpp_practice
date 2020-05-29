#include "Cube.h"
#include "Game.h"
#include "Stack.h"
#include <iostream>

Game::Game(){
  for (unsigned i = 0; i < 3; i++){
    Stack stack;
    stacks_.push_back(stack);
  }
  for (unsigned i = 4; i > 0; i--){
    Cube cube(i, i);
    stacks_[0].pushBack(cube);
  }
}

void Game::solve(){
  std::cout << "Start game status: " << std::endl;
  std::cout << *this << std::endl;
  while (stacks_[2].size() != 4){
    _move(0,1);
    std::cout << *this << std::endl;
    _move(0,2);
    std::cout << *this << std::endl;
    _move(1,2);
    std::cout << *this << std::endl;
  }
  std::cout << "Final game status: " << std::endl;
  std::cout << *this << std::endl;
}

void Game::_move(unsigned index1, unsigned index2){
  if (stacks_[index1].size() == 0 && stacks_[index2].size() > 0){
    _legalMove(index2, index1);
  } else if (stacks_[index1].size() > 0 && stacks_[index2].size() == 0) {
    _legalMove(index1, index2);
  } else if (stacks_[index1].size() > 0 && stacks_[index2].size() > 0){
    if (stacks_[index1].peekTop().getLength() < stacks_[index2].peekTop().getLength()){
      _legalMove(index1, index2);
    } else {
      _legalMove(index2, index1);
    }
  }
}

void Game::_legalMove(unsigned index1, unsigned index2){
  Cube c = stacks_[index1].removeTop();
  stacks_[index2].pushBack(c);
}

std::ostream& operator<<(std::ostream & os, const Game & game){
  for (unsigned i = 0; i < game.stacks_.size() ; i++){
    os << "Stack[" << i << "]: " << game.stacks_[i];
  }
  os << std::endl;
  return os;
}
