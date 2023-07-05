#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point
{
    double xPosition;
    double yPosition;
} point;

class Circle
{
private:
    point center;
    double radius;

public:
    Circle(point center, double radius)
    {
        this->center = center;
        this->radius = radius;
    }
    double area()
    {
        return M_PI * radius * radius;
    }
    double distanceFromCenter(point pt)
    {
        double dis = sqrt(((pt.xPosition - center.xPosition) * (pt.xPosition - center.xPosition)) + ((pt.yPosition - center.yPosition) * (pt.yPosition - center.yPosition)));

        return dis;
    }

    int contains(point pt)
    {
        double dis = sqrt(((pt.xPosition - center.xPosition) * (pt.xPosition - center.xPosition)) + ((pt.yPosition - center.yPosition) * (pt.yPosition - center.yPosition)));
        if (dis <= radius)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    point center;
    point check;
    double radius;
    cout << "Center of Circle: ";
    cin >> center.xPosition >> center.yPosition;
    cout << "Radius of Circle: ";
    cin >> radius;
    cout << "Point to Check: ";
    cin >> check.xPosition >> check.yPosition;
    Circle circle(center, radius);
    cout << "Area of Circle is " << circle.area() << endl;
    cout << "Distance from Center to Point (" << check.xPosition << ", " << check.yPosition << ") is " << circle.distanceFromCenter(check) << endl;
    if (circle.contains(check) == 1)
    {
        cout << "This circle contains this point.";
    }
    else
    {
        cout << "This point is not in this circle.";
    }
}