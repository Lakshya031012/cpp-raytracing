#include <iostream>
#include "vec3.h"

int main() {
    Vec3 pos(10.0, 64.0, -20.0);
    Vec3 step(2.0, 1.0, -5.0);

    Vec3 moved = pos + step;
    Vec3 back = moved - step;
    Vec3 sprint = step * 3.0;
    Vec3 half = step / 2.0;

    std::cout << "Moved: " << moved.x << ", " << moved.y << ", " << moved.z << '\n';
    std::cout << "Back:  " << back.x << ", " << back.y << ", " << back.z << '\n';
    std::cout << "Sprint: " << sprint.x << ", " << sprint.y << ", " << sprint.z << '\n';
    std::cout << "Half:   " << half.x << ", " << half.y << ", " << half.z << '\n';
    std::cout << "Length: " << length(step) << '\n';

    return 0;
}