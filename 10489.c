// [ACM] #10489 - Boxes of Chocolates
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10489     Accepted   0.252   2007-02-21 06:35:45   5348402   0.031

#include<stdio.h>

int main(void)
{
    int a, b, c, d, e, n, sum;

    scanf("%d\n" , &a);
    while(a -- > 0)
    {
        sum = 0;
        scanf("%d %d\n" , &b, &c);
        while(c -- > 0)
        {
            n = 1;
            scanf("%d " , &d);
            while(d -- > 0)
            {
                scanf("%d " , &e);
                n *= e;
                n %= b;
            }
            sum += n;
        }
        printf("%d\n" , sum % b);
    }
    return 0;
}
