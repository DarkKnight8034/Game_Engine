#include <iostream>
#include <cmath>

class Vector
{
public:
    float x, y;

    Vector(const float& _x, const float& _y)
    : x(_x), y(_y)
    {}

    float magnitude() const
    {
        return sqrtf(powf(x, 2) + powf(y, 2));
    }

    float dot(const Vector& other) const
    {
        return x  * other.x + y * other.y;
    }

    // Custom operations
    Vector operator*(const int& scalar) const
    {
        return Vector(x * scalar, y * scalar);
    }

    Vector operator+(const Vector& other)
    {
        return Vector(x + other.x, y + other.y);
    }

    Vector operator-(const Vector& other)
    {
        return Vector(x - other.x, y - other.y);
    }
};

std::ostream& operator<<(std::ostream& stream, Vector v)
{
    stream << "(" << v.x << ", " << v.y << ")";
    return stream;
}

int main()
{
    Vector v = Vector(1, 1);
    std::cout << v;
}
