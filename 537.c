// [ACM] #537 - Artificial Intelligence?
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 537       Accepted   0.000   2007-02-20 04:38:10   5345802   0.000

#include<stdio.h>

float check(char c, float k);

int main(void)
{
    int k, t = 1;
    float p, u, i, n;
    char c, unit;

    scanf("%d\n" , &k);
    while(k -- > 0)
    {
        p = 0;
        u = 0;
        i = 0;
        do
        {
            c = getchar();
            if(c == 'P' || c == 'U' || c == 'I')
            {
                unit = getchar();
                if(unit == '=')
                {
                    scanf("%f%c" , &n, &unit);
                    if(c == 'P')
                      p = n;
                    else if(c == 'U')
                      u = n;
                    else
                      i = n;
                }
            }
            if(unit == 'M' || unit == 'k' || unit == 'm')
            {
                if(c == 'P')
                  p = check(unit, p);
                else if(c == 'U')
                  u = check(unit, u);
                else if(c == 'I')
                  i = check(unit, i);
            }
        }while(c != '\n' && c != EOF);
//         printf("Problem #%d\n" , t ++);
        if(p == 0)
          printf("P=%.2fW\n\n" , u * i);
        else if(u == 0)
          printf("U=%.2fV\n\n" , p / i);
        else
          printf("I=%.2fA\n\n" , p / u);
    }
    return 0;
}

float check(char c, float k)
{
    if(c == 'M')
      k *= 1000000;
    else if(c == 'k')
      k *= 1000;
    else
      k *= 0.001;

    return k;
}
