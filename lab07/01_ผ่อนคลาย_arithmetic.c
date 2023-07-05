#include <stdio.h>
int main()
{
    int a = 4, b = 3, c, d, e;
    float f = 2, g = 5, h, i, j, k;

    c = f / b * f;             /* c = ? */
    h = a++ / (float)b;        /* h = ? */
    j = (float)c / h--;        /* j = ? */
    d = b * h / c;             /* d = ? */
    i = d * f + h--;           /* i = ? */
    e = a * d++ / i;           /* e = ? */
    k = (int)i * d / (float)a; /* k = ? */
}

/*answer
c = "1";
h = "1.33";
j = "0.75";
d = "1";
i = "2.33";
e = "2";
k = "0.80";
*/