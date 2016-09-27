// [ACM] #10530 - Guessing Game
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10530     Accepted   0.004   2007-01-13 09:52:12   5259770   0.000

#include<stdio.h>
#include<string.h>

int main (void)
{
    int n, h = 11, l = 0;
    char x[9];

    while(scanf("%d\n", &n) && n != 0)
    {
        gets(x);
        if(x[4] == 'h')
        {
            if (n <= h)
              h = n - 1;
        }
        else if(x[4] == 'l')
        {
            if (n >= l)
              l = n + 1;
        }
        else
        {
            if (n <= h && n >= l)
              printf("Stan may be honest\n");
            else
              printf("Stan is dishonest\n");
            h = 11;
            l = 0;
        }
    }
    return 0;
}
