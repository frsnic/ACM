// [ACM] #492 - Pig-Latin
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 492       Accepted   0.406   2006-11-05 09:46:32   5108468   0.000

#include<stdio.h>

int main(void)
{
    char x, y, t = 1, k = 0, n = 0, c = 0;

    while(1)
    {
        x = getchar();
        if(x == EOF)
          break;
        else
        {
            if(x == ' ')
            {
                if(c == 0)
                  printf(" ");
                else if(k == 1)
                  printf("%cay " , y);
                else if(n == 1)
                  printf("ay ");
                k = 0;
                n = 0;
                t = 1;
                c = 0;
            }
            else if(('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
            {
                c = 1;
                if(t == 1)
                {
                    if(x == 'a' || x == 'e' || x == 'i' \
                                || x == 'o' || x == 'u')
                    {
                        printf("%c" , x);
                        n = 1;
                    }
                    else if(x == 'A' || x == 'E' || x == 'I' \
                                     || x == 'O' || x == 'U')
                    {
                        printf("%c" , x);
                        n = 1;
                    }
                    else
                    {
                        y = x;
                        k = 1;
                    }
                    t = 0;
                }
                else
                {
                    n = 1;
                    printf("%c" , x);
                }
            }
            else
            {
                if(c == 0)
                  printf("%c" , x);
                else if(k == 1)
                  printf("%cay%c" , y, x);
                else
                  printf("ay%c" , x);
                k = 0;
                t = 1;
                n = 0;
                c = 0;
            }
        }
    }
    return 0;
}
