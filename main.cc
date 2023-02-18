//==============================================================================================
// Written by kar-000.
//
// To the extent possible under law, the author(s) have dedicated all copyright and related and
// neighboring rights to this software to the public domain worldwide. This software is
// distributed without any warranty.
//==============================================================================================

#include "vec3.h"
#include "color.h"
#include <iostream>

int main() {
    // Image Parameters
    const int image_width = 256;
    const int image_height = 256;

    // Render image
    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for(int j = image_height; j>=0;--j){
        std::cerr << "\rScanlines remaining: " << j << ' ' << std::flush;
        for (int i=0; i < image_width;++i){
            color pixel_color(double(i)/(image_width-1), double(j)/(image_height-1), 0.25);
            write_color(std::cout, pixel_color);
        }
    }
    std::cerr << "\nDone.\n";
}