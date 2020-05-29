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
  std::cout << "Start status: " << std::endl;
  std::cout << *this << std::endl;
  _move(0, stacks_[0].size()-1,
        stacks_[0], stacks_[2], stacks_[1]);
  std::cout << "End status: " << std::endl;
  std::cout << *this << std::endl;
}

void Game::_move(unsigned start, unsigned end,
                 Stack & source, Stack & target, Stack & spare){
  if (start == end){
    _moveCube(source, target);
    std::cout << *this << std::endl;
  } else {
    _move(start+1, end, source, spare, target);
    _move(start, start, source, target, spare);
    _move(start+1, end, spare, target, source);
  }
}

void Game::_moveCube(Stack & source, Stack & target){
  Cube c = source.removeTop();
  target.pushBack(c);
}


std::ostream& operator<<(std::ostream & os, const Game & game){
  for (unsigned i = 0; i < game.stacks_.size() ; i++){
    os << "Stack[" << i << "]: " << game.stacks_[i];
  }
  os << std::endl;
  return os;
}
