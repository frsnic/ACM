// [ACM] #10696 - f91
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10696     Accepted   1.486   2006-09-25 10:59:14   4974056   0.000

#include<stdio.h>

int test(unsigned int n);

int test(unsigned int n)
{
    if(n > 100)
      n = n - 10;
    else
      n = test( test(n + 11) );
    return n;
}

int main()
{
    int i, ans;
    unsigned int n = 0;
    while(scanf("%d" , &n))
    {
        if(n == 0)
          break;
        ans = test(n);
        printf("f91(%d) = %d\n" , n, ans);
    }
    return 0;
}
