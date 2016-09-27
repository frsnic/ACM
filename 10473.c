// [ACM] #10473 - Simple Base Conversion
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10473     Accepted   0.037   2006-10-29 10:51:48   5086377   0.008

#include<stdio.h>
#include<string.h>

int main(void)
{
    long int i, x, t, n, l, j, k;
    char s[100];

    while(gets(s)!= NULL)
    {
        n = 1;
        l = strlen(s);
        if(s[0]== '-')
          return 0;
        else if((s[0] == '0' && s[1]=='x'))
        {
            k = 1;
            if(s[l - 1] >= 'A' && s[l - 1] <= 'Z')
              s[l - 1] -=  55;
            else
              s[l - 1] -= 48;
            t = s[l - 1];
            for(i = l - 2; i >= 2; i --)
            {
                n = 1;
                for(j = 0; j < k; j ++)
                {
                    n = 16 * n;
                }
                if(s[i] >= 'A' && s[i] <= 'Z')
                  s[i] -=  55;
                else
                  s[i] -= 48;
                t += n * s[i];
                k ++;
            }
            printf("%ld\n" , t);
        }
        else
        {
            k = 1;
            t = s[l - 1] - 48;
            for(i = l - 2; i >= 0; i --)
            {
                n = 1;
                for(j = 0; j < k; j ++)
                {
                    n = 10 * n;
                }
                t += n * ( s[i] -48);
                k ++;
            }
            printf("0x%X\n" , t);
        }
    }
    return 0;
}
