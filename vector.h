#pragma once
#include <iostream>
#include <ostream>
#include <cmath>

class Vector
{
public:
    float x, y;

    Vector(const float& _x, const float& _y)
    : x(_x), y(_y)
    {}

    float magnitude() const;

    float dot(const Vector& other) const;

    // Custom operations
    Vector operator*(const int& scalar) const
    {
        return Vector(x * scalar, y * scalar);
    }

    Vector operator+(const Vector& other) const
    {
        return Vector(x + other.x, y + other.y);
    }

    Vector operator-(const Vector& other) const
    {
        return Vector(x - other.x, y - other.y);
    }
};

std::ostream& operator<<(std::ostream& stream, const Vector& v)
{
    stream << "(" << v.x << ", " << v.y << ")";
    return stream;
}
