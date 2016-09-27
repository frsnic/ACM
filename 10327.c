// [ACM] #10327 - Flip Sort
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10327     Accepted   0.320   2006-11-03 03:22:31   5100707   0.021

#include<stdio.h>

int main(void)
{
    int i, j, n, k, x[1000], t;

    while(scanf("%d\n" , &n) != EOF)
    {
        k = 0;
        for(i = 0; i < n; i ++)
          scanf("%d " , &x[i]);
        for(i = 0; i < n - 1; i ++)
        {
            for(j = i + 1; j < n; j ++)
            {
                if(x[j] < x[i])
                  k ++;
            }
        }
        printf("Minimum exchange operations : %d\n" , k);
    }
    return 0;
}
