// [ACM] #10880 - Colin and Ryan
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10880     Accepted   1.854   2006-11-03 23:35:58   5103529   0.035

#include<stdio.h>
#include<math.h>

int main(void)
{
    long int i, C, R, Q, n, e, k, G[800];

    scanf("%ld" , &n);
    for(e = 1; e <= n; e ++)
    {
        scanf("%ld %ld" , &C, &R);
        k = 0;
        printf("Case #%ld:" , e);
        if(C == R)
          printf(" 0\n");
        else
        {
            C -= R;
            for(i = 1; i <= sqrt(C); i ++)
            {
                if(C % i == 0)
                {
                    if(i > R)
                      printf(" %ld" , i);
                    if(C / i > R)
                    {
                        if(C / i == i);
                        else
                        {
                            G[k] = C / i;
                            k ++;
                        }
                    }
                }
            }
            if(k != 0 && k != 1)
              printf(" %ld" , G[k - 1]);
            for(i = k - 2; i > 0; i --)
              printf(" %ld" , G[i]);
            if(k == 1)
              printf(" %ld\n" , G[0]);
            else if(k != 0)
              printf(" %ld\n" , G[0]);
            else if(k == 0)
              printf("\n");
        }
    }
    return 0;
}
