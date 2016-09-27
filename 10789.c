// [ACM] #10789 - Prime Frequency
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10789     Accepted   0.061   2006-10-30 12:09:29   5089161   0.004

#include<stdio.h>
#include<string.h>

int check(int k);

int main(void)
{
    int s, t, i, j, y, n, m = 1, l, apn[62];
    char x[2002], ap[62];
    scanf("%d\n" , &n);
    for(s = 0; s < n; s ++)
    {
        y = 0;
        t = 0;
        for(i = 0; i < 62; i ++)
        {
            ap[i] = 0;
            apn[i] = 0;
        }
        gets(x);
        l = strlen(x);
        for(i = l + 1; i < 2002; i ++)
          x[i] = 0;
        for(j = 0; j < l; j ++)
        {
            for(i = 0; i < 62; i ++)
            {
                if(x[j] == ap[i])
                {
                    apn[i] ++;
                    y = 1;
                    break;
                }
                else if(i == 61)
                {
                    ap[t] = x[j];
                    apn[t] = 1;
                    t ++;
                    break;
                }
            }
        }
        if(y == 0)
        {
            printf("Case %d: empty" , m);
            m ++;
        }
        else
        {
            for(i = 0; i < t; i ++)
            {
                if(check(apn[i]))
                {
                    x[y - 1] = ap[i];
                    y ++;
                }
            }
            for(i = 0; i < y - 1; i ++)
            {
                for(j = i + 1; j < y - 1; j ++)
                {
                    if(x[j] < x[i])
                    {
                        ap[0] = x[i];
                        x[i] = x[j];
                        x[j] = ap[0];
                    }
                }
            }
            if(y < 2)
            {
                printf("Case %d: empty" , m);
                m ++;
            }
            else
            {
                printf("Case %d: " , m);
                for(i = 0; i < y - 1; i ++)
                  printf("%c" , x[i]);
                m ++;
            }
        }
        printf("\n");
    }
    return 0;
}

int check(int k)
{
    int i = 0;

    if(k < 2)
      return 0;
    for(i = 2; i < k; i ++)
    {
        if(k % i == 0)
          return 0;
    }
    if(i >= k)
      return 1;
}
