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
        return M_PI*radius*radius;
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
    // สร้าง Object เพื่อทดสอบด้วยตัวเอง
}