#include <iostream>
#include "vec3.h"
#include "ray.h"

int main() {
    Vec3 pos(10.0, 64.0, -20.0);
    Vec3 step(2.0, 1.0, -5.0);

    Vec3 moved = pos + step;
    Vec3 back = moved - step;
    Vec3 sprint = step * 3.0;
    Vec3 half = step / 2.0;
    Vec3 c = cross(pos, step);
    Vec3 u = unit_vector(step);
    Vec3 origin(0.0, 0.0, 0.0);
    Vec3 direction(1.0, 2.0, -3.0);
    Ray r(origin, direction);
    Vec3 point_at_2 = r.at(2.0);

    std::cout << "Moved: " << moved.x << ", " << moved.y << ", " << moved.z << '\n';
    std::cout << "Back:  " << back.x << ", " << back.y << ", " << back.z << '\n';
    std::cout << "Sprint: " << sprint.x << ", " << sprint.y << ", " << sprint.z << '\n';
    std::cout << "Half:   " << half.x << ", " << half.y << ", " << half.z << '\n';
    std::cout << "Length: " << length(step) << '\n';
    std::cout << "Dot: " << dot(pos, step) << '\n';
    std::cout << "Cross: " << c.x << ", " << c.y << ", " << c.z << '\n';
    std::cout << "Unit:  " << u.x << ", " << u.y << ", " << u.z << '\n';
    std::cout << "Origin: " << r.orig.x << ", " << r.orig.y << ", " << r.orig.z << '\n';
    std::cout << "At t=2: " << point_at_2.x << ", " << point_at_2.y << ", " << point_at_2.z << '\n';

    return 0;
}