// [ACM] #406 - Prime Cuts
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 406       Accepted   0.344   2006-12-01 05:52:23   5172677   0.000

#include<stdio.h>

int check(int k);

int main(void)
{
    int i, n, c, k = -1, x = 0, pr[169];

    for(i = 1; i <= 1009; i ++)
    {
        if(check(i) == 1)
          pr[x ++] = i;
    }
    while(scanf("%d %d" , &n, &c) != EOF)
    {
        k = 0;
        i = 0;
        while(n >= pr[i ++])
          k ++;
        if(pr[i --] == n)
          k ++;
        printf("%d %d:" , n, c);
        if(c * 2 >= k)
        {
            for(i = 0; i < k; i ++)
              printf(" %d" , pr[i]);
        }
        else if(k % 2 == 0)
        {
            for(i = k / 2 - c; i <= k / 2 - 1 + c; i ++)
              printf(" %d" , pr[i]);
        }
        else
        {
            for(i = k / 2 - c + 1; i < k / 2 + c; i ++)
              printf(" %d" , pr[i]);
        }
        printf("\n\n");
    }
    return 0;
}

int check(int k)
{
    int i = 0;

    for(i = 2; i < k; i ++)
    {
        if(k % i == 0)
          return 0;
    }
    if(i >= k)
      return 1;
}
