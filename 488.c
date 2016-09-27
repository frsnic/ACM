// [ACM] #488 - Triangle Wave
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 488       Accepted   2.053   2006-10-15 07:56:26   5042530   0.000

#include<stdio.h>

int main(void)
{
    int i, x = 0, y, a, f, n, k = 1;

    scanf("%d" , &n);
    for(i = 0; i < n; i ++)
    {
        scanf("%d %d" , &a, &f);
        for(y = 1; y <= f; y ++)
        {
            k = 1;
            for(x = 1; x <= k; x ++)
            {
                printf("%d" , k);
                if(x == k)
                {
                    printf("\n");
                    x = 0;
                    k ++;
                }
                if(k == a + 1)
                  break;
            }
            k = a - 1;
            for(x = 1; x <= k; x ++)
            {
                printf("%d" , k);
                if(x == k)
                {
                    x = 0;
                    printf("\n");
                    k --;
                }
            }
            if(i == n - 1 && y == f);
            else printf("\n");
        }
    }
    return 0;
}
