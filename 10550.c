// [ACM] #10550 - Combination Lock
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10550     Accepted   0.000   2008-10-08 07:36:38   6710266   0.000

#include<stdio.h>

int main(void)
{
    int n[4], t;

    while(scanf("%d %d %d %d\n" , &n[0], &n[1], &n[2], &n[3]) == 4)
    {
        if(n[0] + n[1] + n[2] + n[3] == 0)
          break;
        t = 1080;

        if(n[0] < n[1])
          t += 360 - (n[1] - n[0]) * 9;
        else
          t += (n[0] - n[1]) * 9;
        if(n[1] > n[2])
          t += 360 - (n[1] - n[2]) * 9;
        else
          t += (n[2] - n[1]) * 9;
        if(n[2] < n[3])
          t += 360 - (n[3] - n[2]) * 9;
        else
          t += (n[2] - n[3]) * 9;

        printf("%d\n" , t);
    }
    return 0;
}
