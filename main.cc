//==============================================================================================
// Written by kar-000.
//
// To the extent possible under law, the author(s) have dedicated all copyright and related and
// neighboring rights to this software to the public domain worldwide. This software is
// distributed without any warranty.
//==============================================================================================

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
            auto r = double(i) / (image_width-1);
            auto g = double(j) / (image_height-1);
            auto b = 0.25;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
    std::cerr << "\nDone.\n";
}