#pragma once
#include "Stack.h"
#include <vector>

class Game {
public:
  Game();
  void solve();
  void _move(unsigned index1, unsigned index2);
  void _legalMove(unsigned index1, unsigned index2);

  friend std::ostream& operator<<(std::ostream & os, const Game & game);

private:
  std::vector<Stack> stacks_;
};
