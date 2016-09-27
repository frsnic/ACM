// [ACM] #10370 - Above Average
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10370     Accepted   0.012   2006-10-31 11:25:10   5091939   0.000

#include<stdio.h>

int main(void)
{
    int i, n[1000], x, j, m;
    float c, t, sum;

    scanf("%d" , &x);
    for(i = 0; i < x; i ++)
    {
        sum = 0;
        t = 0;
        scanf("%d" , &m);
        for(j = 0; j < m; j ++)
        {
            scanf("%d" , &n[j]);
            sum += n[j];
        }
        c = sum / m;
        for(j = 0; j < m; j ++)
        {
            if(n[j] > c)
              t ++;
        }
        c = t / m * 100;
        printf("%.3f%\%\n" , c);
    }
    return 0;
}
