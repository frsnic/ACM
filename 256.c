// [ACM] #256 - Quirksome Squares
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 256       Accepted   1.658   2006-10-31 10:33:33   5091835   0.000

#include<stdio.h>
#include<string.h>

int main(void)
{
    int i, j, l, a, b, x;

    while(scanf("%d" , &x) != EOF)
    {
        a = 0;
        b = 0;
        if(x == 2)
          l = 9;
        else if(x == 4)
          l = 99;
        else if(x == 6)
          l = 999;
        else
          l = 9999;
        for(i = 0; i <= l; i ++)
        {
            a = i;
            for(j = 0; j <= l; j ++)
            {
                b = j;
                if((a + b) * (a + b) == a * (l + 1) + b)
                {
                    if(l == 9)
                      printf("%d%d\n" , a, b);
                    else if(l == 99)
                    {
                        if(a < 10)
                          printf("0%d" , a);
                        else
                          printf("%d" , a);
                        if(b < 10)
                          printf("0%d\n" , b);
                        else
                          printf("%d\n" ,b);
                    }
                    else if(l == 999)
                    {
                        if(a < 10)
                          printf("00%d" , a);
                        else if(a < 100)
                          printf("0%d" , a);
                        else
                          printf("%d" , a);
                        if(b < 10)
                          printf("00%d\n" , b);
                        else if(b < 100)
                          printf("0%d\n" , b);
                        else
                          printf("%d\n" , b);
                    }
                    else
                    {
                        if(a < 10)
                          printf("000%d" , a);
                        else if(a < 100)
                          printf("00%d" , a);
                        else if(a < 1000)
                          printf("0%d" , a);
                        else
                          printf("%d" , a);
                        if(b < 10)
                          printf("000%d\n" , b);
                        else if(b < 100)
                          printf("00%d\n" , b);
                        else if(b < 1000)
                          printf("0%d\n" , b);
                        else
                          printf("%d\n" , b);
                    }
                }
            }
        }
    }
    return 0;
}
