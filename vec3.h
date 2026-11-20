#ifndef VEC3_H
#define VEC3_H
#include <cmath>

struct Vec3 {
    double x;
    double y;
    double z;

    Vec3() : x(0.0), y(0.0), z(0.0) {}
    Vec3(double x_val, double y_val, double z_val)
        : x(x_val), y(y_val), z(z_val) {}
};

inline Vec3 operator+(const Vec3& a, const Vec3& b) {
    return Vec3(a.x + b.x, a.y + b.y, a.z + b.z);
}

inline Vec3 operator-(const Vec3& a, const Vec3& b) {
    return Vec3(a.x - b.x, a.y - b.y, a.z - b.z);
}

inline Vec3 operator*(const Vec3& v, double t) {
    return Vec3(v.x * t, v.y * t, v.z * t);
}

inline Vec3 operator*(double t, const Vec3& v) {
    return v * t;
}

inline Vec3 operator/(const Vec3& v, double t) {
    return v * (1.0 / t);
}

inline double length(const Vec3& v) {
    return std::sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

#endif