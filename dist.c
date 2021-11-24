typedef struct
{
    double x, y;
} Point;

double dist(Point a, Point b)
{
    return hypot(a.x - b.x, a.y - b.y);
}
