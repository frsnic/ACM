// [ACM] #264 - Count on Cantor
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 266       Accepted   0.033   2007-05-27 03:47:06   5616784    0.000

#include<stdio.h>

int main(void)
{
    int k, n, i, j, a, b;

    while(scanf("%d" , &n) != EOF)
    {
        i = 1;
        j = 1;
        k = n;
        while(k > i)
        {
            k -= i;
            j += i ++;
        }
        if(i % 2 == 0)
          printf("TERM %d IS %d/%d\n" , n, n - j + 1, i - n + j);
        else
          printf("TERM %d IS %d/%d\n" , n, i - n + j, n - j + 1);
    }
    return 0;
}
