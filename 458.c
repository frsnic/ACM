// [ACM] #458 - The Decoder
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 458       Accepted   0.234   2006-10-16 11:25:40   5047627   0.000

#include<stdio.h>
#include<string.h>

int main(void)
{
    char s[1001];
    int a, b, n, i;

    while(1)
    {
        if( ! ( gets(s) ) )
          break;
        n = strlen(s);
        for(i = 0; i < n; i ++)
        {
            if(s[i] != '\n')
              printf("%c" , s[i]-7);
        }
        printf("\n");
    }
    return 0;
}
