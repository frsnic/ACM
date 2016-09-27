// [ACM] #138 - Street Numbers
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 138       Accepted   0.006   2006-12-11 09:47:29   5192061   2.453

#include<stdio.h>
#include<math.h>

int main(void)
{
    int i = 0, p, q, t;

    for(t = 2; i < 10; t ++)
    {
        q = 2 * t * t + 1;
        p = sqrt(q);
        if(p * p == q)
        {
            i ++;
            printf("%10ld%10ld\n" , t * p, q - 1);
        }
        q = (t * t + 1) / 2;
        p = sqrt(q);
        if(p * p == q)
        {
            i ++;
            printf("%10ld%10ld\n" , t * p, t * t);
        }
    }
    return 0;
}
