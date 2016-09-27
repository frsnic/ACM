// [ACM] #113 - Power of Cryptography
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 113       Accepted   0.014   2006-11-11 09:06:50   5126423   0.000

#include<stdio.h>
#include<math.h>

int main(void)
{
    double n, p;

    while(scanf("%lf %lf" , &n, &p) != EOF)
      printf("%0.lf\n" , pow(p, 1.0 / n));
    return 0;
}
