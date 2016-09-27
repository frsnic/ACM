// [ACM] #11059 - Maximum Product
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 11059     Accepted   0.002   2006-10-23 10:29:09   5068278   0.000

#include<stdio.h>

int main()
{
    int i, j ,n , m = 1;
    long long int p, k, a[18];

    while(scanf("%d" , &n) != EOF)
    {
        i = 0;
        p = 0;
        k = 0;
        while(i < n)
        {
            scanf("%lld" , &a[i]);
            if(a[i] > p)
              p = a[i];
            i ++;
        }
        for(i = 0; i < n; i ++)
        {
            k = a[i];
            if(k > p)
              p = k;
            for(j = i + 1; j < n; j ++)
            {
                k = k * a[j];
                if(k > p)
                  p = k;
            }
        }
        printf("Case #%d: The maximum product is %lld.\n\n" , m, p);
        m ++;
    }
    return 0;
}
