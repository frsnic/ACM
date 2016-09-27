// [ACM] #10499 - The Land of Justice
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10499     Accepted   0.086   2006-11-09 03:39:42   5119903   0.029

#include<stdio.h>

int main(void)
{
    long long int i, n;

    while(scanf("%lld" , &n) == 1)
    {
        if(n < 0)
          break;
        else if(n != 1)
          printf("%lld\%\n" , n * 25);
        else
          printf("0\%\n");
    }
    return 0;
}
