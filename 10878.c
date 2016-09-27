// [ACM] #10878 - Decode the tape
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10878     Accepted   0.004   2006-11-10 10:25:05   5123754   0.000

#include<stdio.h>

int main(void)
{
    int sum, i, n;
    char t[12];

    gets(t);
    while(gets(t) != NULL)
    {
        if(t[0] == '_')
          break;
        sum = 0;
        n = 128;
        if(t[1] == 'o')  sum += 128;
        if(t[2] == 'o')  sum += 64;
        if(t[3] == 'o')  sum += 32;
        if(t[4] == 'o')  sum += 16;
        if(t[5] == 'o')  sum += 8;
        if(t[7] == 'o')  sum += 4;
        if(t[8] == 'o')  sum += 2;
        if(t[9] == 'o')  sum ++;
        printf("%c" , sum);
    }
    return 0;
}
