// [ACM] #10055 - Hashmat the brave warrior
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10055     Accepted   0.424   2006-10-20 18:00:14   5061047   0.037

#include <stdio.h>

int main(void)
{
    long long int a, b, c;

    while(scanf("%lld %lld" , &a, &b) == 2)
    {
        if(a > b)
          c = a - b;
        else
          c = b - a;
        printf("%lld\n" , c);
    }
    return 0;
}
