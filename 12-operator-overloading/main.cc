#include <iostream>

struct Vector2
{
  float x, y;
  Vector2(float x, float y) : x(x), y(y) {}
  friend std::ostream &operator<<(std::ostream &output, const Vector2 &vec)
  {
    output << "(" << vec.x << "," << vec.y << ")";
    return output;
  }
  Vector2 Add(const Vector2 &other) const
  {
    return Vector2(x + other.x, y + other.y);
  }
  Vector2 operator+(const Vector2 &vec) const
  {
    return Add(vec); // or Vector2(x + vec.x, y + vec.y); 
  }
};

int main(int argc, char const *argv[])
{
  Vector2 position(4.0f, 4.0f);
  Vector2 speed(0.5f, 1.5f);
  Vector2 sum = position.Add(speed);
  std::cout << "position + speed -> " << sum << std::endl;
  std::cout << "position + speed [using +] -> " << position + speed << std::endl;
  // u can use even also {}
  // Vector2 m = Vector2{0.5f, 10.3f};
  // Vector2 m{0.5f, 10.3f};
  std::cin.get();
  return 0;
}
