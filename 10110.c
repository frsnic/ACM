// [ACM] #10110 - Light, More Light
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10110     Accepted   0.166   2006-11-13 12:33:16   5131765   0.000

#include<stdio.h>
#include<math.h>

int main(void)
{
    long long int a, i;

    while(scanf("%lld" , &a) && a != 0)
    {
        if(a == 1)
          printf("yes\n");
        else
        {
            i = pow(a, 1.0 / 2.0);
            if(i * i == a)
              printf("yes\n");
            else
              printf("no\n");
        }
    }
    return 0;
}
