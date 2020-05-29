//
//  Cube.h
//  aaa
//
//  Created by Tianyu Zhang on 5/28/20.
//  Copyright © 2020 Tianyu Zhang. All rights reserved.
//

#pragma once

class Cube {
public:
    Cube(double length, int color);
    Cube(const Cube & obj);
    Cube & operator=(const Cube & obj);
    double getVolume();
    double getLength() const;
    double getSurfaceArea();
    void setLength(double length);

private:
    double length_;
    int color_;
};
