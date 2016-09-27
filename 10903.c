// [ACM] #10903 - Rock-Paper-Scissors Tournament
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10903     Accepted   1.203   2006-11-07 11:24:36   5114450   0.148

#include<stdio.h>

int main(void)
{
    int n, k, v , u, i = 0, pw[100], pl[100];
    float w;
    char vt[9], ut[9];
    char type[3] = {'s', 'p', 'r'};

    while(scanf("%d %d" , &n, &k) == 2)
    {
        if(i != 0)
          printf("\n");
        for(i = 0; i < 100; i ++)
        {
            pw[i] = 0;
            pl[i] = 0;
        }
        for(i = 0; i <  k * n * (n - 1) / 2 ;i ++)
        {
            scanf("%d %s %d %s" , &v, vt, &u, ut);
            if(vt[0] == type[0] && ut[0] == type[0]);
            else if(vt[0] == type[1] && ut[0] == type[1]);
            else if(vt[0] == type[2] && ut[0] == type[2]);
            else if(vt[0] == type[0])
            {
                if(ut[0] == type[1])
                {
                    pw[v - 1] ++;
                    pl[u - 1] ++;
                }
                else
                {
                    pw[u - 1] ++;
                    pl[v - 1] ++;
                }
            }
            else if(vt[0] == type[1])
            {
                if(ut[0] == type[0])
                {
                    pw[u - 1] ++;
                    pl[v - 1] ++;
                }
                else
                {
                    pw[v - 1] ++;
                    pl[u - 1] ++;
                }
            }
            else
            {
                if(ut[0] == type[0])
                {
                    pw[v - 1] ++;
                    pl[u - 1] ++;
                }
                else
                {
                    pw[u - 1] ++;
                    pl[v - 1] ++;
                }
            }
        }
        for(i = 0; i < n; i ++)
        {
            w =  pw[i] + pl[i];
            if(w == 0)
              printf("-\n");
            else
            {
                w = pw[i] / w;
                printf("%.3f\n" , w);
            }
        }
    }
    return 0;
}
