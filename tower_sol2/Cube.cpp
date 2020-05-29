//
//  Cube.cpp
//  aaa
//
//  Created by Tianyu Zhang on 5/28/20.
//  Copyright © 2020 Tianyu Zhang. All rights reserved.
//

#include "Cube.h"
#include <iostream>
Cube::Cube(double length, int color){
  length_ = length;
  color_ = color;
  // std::cout << 1 << std::endl;
}
Cube::Cube(const Cube & obj){
  length_ = obj.length_;
  // std::cout << 2 << std::endl;
}
Cube & Cube::operator=(const Cube & obj){
  length_ = obj.length_;
  // std::cout << 3 << std::endl;
  return *this;
}

double Cube::getVolume(){
    return length_*length_*length_;
}

double Cube::getLength() const {
    return length_;
}

double Cube::getSurfaceArea(){
    return 6*length_*length_;
}

void Cube::setLength(double length){
    length_ = length;
}
