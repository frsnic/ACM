// [ACM] #10812 - Beat the Spread!
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10812     Accepted   0.000   2006-10-29 07:45:56   5085944   0.000

#include<stdio.h>

int main(void)
{
    int i, a, b, n, x, y;
    scanf("%d" ,&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d" , &a, &b);
        if((a + b ) % 2 != 0)
          printf("impossible\n");
        else
        {
            x = (a + b) / 2;
            y = a - x;
            if(y < 0)
              printf("impossible\n");
            else
              printf("%d %d\n" , x, y);
        }
    }
    return 0;
}
