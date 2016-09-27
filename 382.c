// [ACM] #382 - Perfection
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 382       Accepted   0.004   2006-10-31 10:50:30   5091868   0.000

#include<stdio.h>

int main(void)
{
    int i, x, sum;

    scanf("%d " , &x);
    printf("PERFECTION OUTPUT\n");
    while(x != 0)
    {
        sum = 0;
        for(i = 1; i < x; i ++)
        {
            if(x % i == 0)
              sum += i;
        }
        if(sum == x)
          printf("%5d  PERFECT\n" , x);
        else if(sum < x)
          printf("%5d  DEFICIENT\n" , x);
        else
          printf("%5d  ABUNDANT\n" , x);
        scanf("%d " , &x);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
