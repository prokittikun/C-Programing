#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

int main() {
    int points;
    printf("Number of Points: ");
    scanf("%d", &points);

    Point point[points];

    int i = 0;
    while (i < points) {
        printf("P%d.X: ", i + 1);
        scanf("%lf", &point[i].x);
        printf("P%d.Y: ", i + 1);
        scanf("%lf", &point[i].y);
        i++;
    }

    printf("Length:\n");

    i = 1;
    while (i < points) {
        double ans = sqrt((pow(point[i].x - point[i - 1].x, 2)) + (pow(point[i].y - point[i - 1].y, 2)));
        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n", i, point[i - 1].x, point[i - 1].y, i + 1, point[i].x, point[i].y, ans);
        i++;
    }
}
