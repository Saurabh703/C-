#include <iostream>
#include <math.h>
using namespace std;

class Point
{
private:
    int x, y;
    friend Point difference(Point o1, Point o2);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    };

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

Point difference(Point o1, Point o2)
{
    int z, distance;
    z = ((o2.x - o1.x) * (o2.x - o1.x)) + ((o2.y - o1.y) * (o2.y - o1.y));
    distance = sqrt(z);
    cout << "The distance between two points " << distance;
}

int main()
{

    Point p(1, 2);
    p.displayPoint();

    Point q(3, 8);
    q.displayPoint();

    difference(p, q);
    return 0;
}