// [ACM] #10071 - Back to High School Physics
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10071     Accepted   0.092   2006-10-16 12:26:15   5047771   0.000

#include<stdio.h>

int main(void)
{
    int v, t;

    while(scanf("%d %d" , &v, &t) != EOF)
    {
        printf("%d\n" , 2 * v * t);
    }
    return 0;
}
