#ifndef COLOR_H
#define COLOR_H

//==============================================================================================
// Written by kar-000, 2023.
//
// Done as part of a publicly available lesson from Peter Shirley in 2016.
//
// To the extent possible under law, the author(s) have dedicated all copyright and related and
// neighboring rights to this software to the public domain worldwide. This software is
// distributed without any warranty.
//==============================================================================================
#include "vec3.h"
#include <iostream>

void write_color(std::ostream &out, color pixel_color) {
    // Translate [0,255] value to color and write it out.
    out << (static_cast<int>(255.999 * pixel_color.x())) << ' '
        << (static_cast<int>(255.999 * pixel_color.y())) << ' '
        << (static_cast<int>(255.999 * pixel_color.z())) << '\n';
}

#endif