class Point
{
public:
  int x, y;

  Point(int x, int y) : x(x), y(y) {}

  friend Point operator+(const Point &p1, const Point &p2)
  {
    return Point(p1.x + p2.x, p1.y + p2.y);
  }
};

int main()
{
  Point p1(1, 2), p2(3, 4);
  Point sum = p1 + p2; // What will be the coordinates of sum?
}
