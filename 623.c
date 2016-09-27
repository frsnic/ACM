// [ACM] #623 - 500!
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 623       Accepted   7.197   2006-11-02 15:09:18   5098891   0.047

#include<stdio.h>
#define LEN 1000

int main(void)
{
    int i, j, n, k;
    int x[LEN];

    while(scanf("%d" , &n) !=EOF)
    {
        k = 1;
        x[0] = 1;
        for(i = 1; i < LEN; i ++)
          x[i] = 0;

        for(i = 1; i <= n; i ++)
        {
            for(j = 0; j < k; j ++)
              x[j] = x[j] * i;
            for(j = 0; j < k -1; j ++)
            {
                if(x[j] > 9999)
                {
                    x[j + 1] = x[j + 1] + x[j] / 10000;
                    x[j] = x[j] % 10000;
                }
            }
            if(x[k - 1] > 9999)
            {
                k ++;
                x[j + 1] = x[j + 1] + x[j] / 10000;
                x[j] = x[j] % 10000;
            }
        }
        printf("%d!\n" , n);
        for(i = k - 1; i >= 0; i --)
        {
            if(i != k - 1)
            {
                if(x[i] == 0)
                  printf("0000");
                else if(x[i] <= 9)
                  printf("000%d" , x[i]);
                else if(x[i] <= 99)
                  printf("00%d" , x[i]);
                else if(x[i] <= 999)
                  printf("0%d" , x[i]);
                else
                  printf("%d" , x[i]);
            }
            else
              printf("%d" , x[i]);
        }
        printf("\n");
    }
    return 0;
}
