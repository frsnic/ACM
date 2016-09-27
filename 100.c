// [ACM] #100 - The 3n + 1 problem
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 100       Accepted   3.857   2006-09-23 03:26:52   4967509   0.000

#include<stdio.h>

int main()
{
    int a, b, i, j, k, x, y;

    while(scanf("%d %d" , &a, &b) == 2)
    {
        if(a < 1 || b < 1)
          break;
        if(a >= 1000000 || b >= 1000000)
          break;
        y = a > b ? a : b;
        x = a < b ? a : b;
        k = 0;
        for(; x <= y; x ++)
        {
            j = 1;
            i = x;
            while(i != 1)
            {
                if(i % 2 == 0)
                  i = i / 2;
                else
                  i = i * 3 + 1;
                j ++;
            }
            if(j > k)
              k = j;
        }
        printf("%d %d %d\n" , a, b, k);
    }
    return 0;
}
