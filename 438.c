// [ACM] #438 - The Circumference of the Circle
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 438       Accepted   0.002   2007-02-18 05:38:50   5341192   0.000

#include<stdio.h>
#include<math.h>

double count(double a, double b, double c, double d, double x, double y);

int main(void)
{
    double x1, y1, x2, y2, x3, y3;
    double x, y, a, b, c, d, p, q, e, f, l;

    while(scanf("%lf %lf %lf %lf %lf %lf" \
               , &x1, &y1, &x2, &y2, &x3, &y3) == 6)
    {
        a = x1 - x2;
        b = y1 - y2;
        p = ((x1 + x2) / 2) * a + ((y1 + y2) / 2) * b;

        c = x2 - x3;
        d = y2 - y3;
        q = ((x2 + x3) / 2) * c + ((y2 + y3) / 2) * d;

        y = count(b, p, d, q, c, a);
        x = count(a, p, c, q, d, b);

        l = (x - x1) * (x - x1) + (y - y1) * (y - y1);
        l = sqrt(l) * 2 * 3.141592653589793;
        printf("%.2f\n" , l);
    }
    return 0;
}

double count(double a, double b, double c, double d, double x, double y)
{
    a *= x;
    b *= x;

    c *= y;
    d *= y;

    if(a == c)
      return 0;
    else
      return (b - d) / (a - c);
}
