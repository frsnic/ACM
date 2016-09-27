// [ACM] #10783 - Odd Sum
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10783     Accepted   0.000   2006-10-15 11:47:32   5043273   0.000

#include<stdio.h>

int main(void)
{
    int n, i, c, b, s, sum;

    scanf("%d" , &n);
    for(i = 1; i <= n; i ++)
    {
        sum = 0;
        scanf("%d %d" , &b, &s);
        c = b > s ? b : s;
        s = b > s ? s : b;
        b = c;
        if( ! (s % 2) )
          s ++;
        for(c = s ; c <= b ; c += 2)
          sum += c;
        printf("Case %d: %d\n" , i, sum);
    }
    return 0;
}
