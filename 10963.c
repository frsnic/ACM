// [ACM] #10963 - The Swallowing Ground
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10963     Accepted   0.000   2006-10-29 09:11:29   5086168   0.000

#include<stdio.h>

int main(void)
{
    int i, j, a, b, n, m, t, y;

    scanf("%d" , &n);
    for(i = 0; i < n; i ++)
    {
        y = 1;
        scanf("%d" , &m);
        scanf("%d %d" , &a, &b);
        t = a - b;
        for(j = 0; j < m - 1; j ++)
        {
            scanf("%d %d" , &a, &b);
            if(t != a - b && t != b - a)
              y = 0;
        }
        if(y == 1)
          printf("yes\n");
        else
          printf("no\n");
        if(i != n - 1)
          printf("\n");
    }
    return 0;
}
