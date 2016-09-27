// [ACM] #10107 - What is the Median?
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10107     Accepted   0.936   2006-10-31 13:02:01   5092151   0.008

#include<stdio.h>

int main(void)
{
    int i = 0, k = 0, n[10000], p, q, t;

    while(scanf("%d" , &n[i]) != EOF)
    {
        for(p = 1; p < i + 1; p ++)
        {
            t = n[p];
            q = p - 1;
            while(t < n[q])
            {
                n[q + 1] = n[q];
                q --;
                if(q == -1)
                  break;
            }
            n[q + 1] = t;
        }
        if((i + 1) & 1)
        {
            printf("%d\n" , n[k / 2]);
            k ++;
        }
        else
        {
            printf("%d\n" , (n[k / 2] + n[k / 2 + 1]) / 2);
            k ++;
        }
        i ++;
    }
    return 0;
}
