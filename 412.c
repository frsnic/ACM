// [ACM] #412 - Pi
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 412       Accepted   1.404   2006-11-11 08:20:09   5126323   0.000

#include<stdio.h>
#include<math.h>

int prime(int x, int y);

int main(void)
{
    int i, j, t, n, m, x[50];
    double ans;

    while(scanf("%d" , &n) != EOF)
    {
        if(n == 0)
          break;
        t = 0;
        m = 0;
        for(i = n - 1; i >= 1; i --)
          m += i;
        for(i = 0; i < n; i ++)
          scanf("%d" , &x[i]);
        for(i = 0; i < n; i ++)
        {
            for(j = i + 1; j < n; j ++)
            {
                if(prime(x[i], x[j]))
                  t ++;
            }
        }
        if(t != 0)
        {
            ans = m;
            ans = ans / t;
            printf("%f\n" , sqrt(6 * ans));
        }
        else
          printf("No estimate for this data set.\n");

    }
    return 0;
}

int prime(int x, int y)
{
    if(x == y)
      return 0;
    else if(x == 1 || y == 1)
      return 1;
    else if(x % y == 0 || y % x == 0)
      return 0;
    else
      return prime(y , x % y);
}
