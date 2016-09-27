// [ACM] #591 - Box of Bricks
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 591       Accepted   0.000   2006-10-16 10:52:53   5047562   0.000

#include<stdio.h>

int main(void)
{
    int h[50], n, i, sum = 0, x = 0, m = 0 , k = 1;

    while(1)
    {
        sum = 0;
        m = 0;
        scanf("%d" , &n);
        if(n == 0)
          break;
        for(i = 0; i < n; i ++)
        {
            scanf("%d" , &h[i]);
            sum += h[i];
        }
        sum = sum / n;
        for(i = 0; i < n;i ++)
        {
            if(h[i] < sum)
            {
              x = sum - h[i];
              m += x;
            }
        }
        printf("Set #%d\n" , k);
        printf("The minimum number of moves is %d.\n\n" , m);
        k ++;
    }
    return 0;
}
