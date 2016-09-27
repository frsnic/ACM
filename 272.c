// [ACM] #272 - TeX Quotes
// Problem   Status     CPU     Date&Time(UTC)        ID Best   CPU
// 272       Accepted   0.014   2006-10-16 11:05:38   5047594   0.000

#include<stdio.h>

int main(void)
{
    char s;
    int t = 1;

    while(1)
    {
        s = getchar();
        if(s == EOF)
          break;
        if(s == '"')
        {
            if(t == 1)
            {
                printf("``");
                t = 0;
            }
            else
            {
                t = 1;
                printf("''");
            }
        }
        else
          printf("%c" , s);
    }
    return 0;
}
