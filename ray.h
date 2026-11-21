#ifndef RAY_H
#define RAY_H

#include "vec3.h"

struct Ray{
	Vec3 orig;
	Vec3 dir;

	Ray() {}
	Ray(const Vec3& origin, const Vec3& direction)
        : orig(origin), dir(direction) {}

    Vec3 origin() const { return orig;}
    Vec3 direction() const { return dir; }

    inline Vec3 at(double t) const {
	    return orig + t * dir;
    }        
};

#endif