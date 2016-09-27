// [ACM] #484 - The Department of Redundancy Department
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 484       Accepted   0.301   2006-11-11 08:15:04   5126314   0.000

#include<stdio.h>
#define LEN 8000

int main(void)
{
    int t, i, e = 0, p = 0, in[LEN][2];

    while(scanf("%d " , &t) != EOF)
    {
        e = 0;
        for(i = 0; i <= p; i ++)
        {
            if(t == in[i][0])
            {
                in[i][1] ++;
                e = 1;
            }
        }
        if(e == 0)
        {
            in[p][0] = t;
            in[p][1] = 1;
            p ++;
        }
    }
    for(i = 0; i < p; i ++)
      printf("%d %d\n" , in[i][0], in[i][1]);
    return 0;
}
