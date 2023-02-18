#ifndef RAY_H
#define RAY_H

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
//==============================================================================================
//                                    RAYS                                        
// a ray is a product of function P(t) = A + tb,
// Where P is a 3D position along a line in 3D. A is the ray origin and b is the ray direction. 
// "t" is a real number (I used a double). 
// P(t) moves a point along the ray. -t moves the point behind A, 
//         and +t moves forward past (both in direction of B).
//==============================================================================================

class ray {
    public:
        ray() {}
        ray(const point3& origin, const vec3& direction)
            : orig(origin), dir(direction)
        {}

        point3 origin() const  {return orig;}
        vec3 direction() const {return dir; } 

        point3 at(double t) const {
            return orig + t*dir;
        }

    public:
        point3 orig;
        vec3 dir;
};

#endif