// [ACM] #446 - Kibbles ``n'' Bits ``n'' Bits ``n'' Bits
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 446       Accepted   0.000   2007-01-03 04:34:50   5236333   0.000

#include<stdio.h>
#include<string.h>

int ch16(char x[]);
void ch2(int sum, char x[]);

int main(void)
{
    int x, y, i, n;
    char c, c1[14], c2[14];

    scanf("%d" , &n);
    while(n -- > 0)
    {
        scanf("%s %c %s" , c1, &c, c2);
        x = ch16(c1);
        y = ch16(c2);
        ch2(x, c1);
        printf(" %c " , c);
        ch2(y, c2);
        if(c == '+')
          printf(" = %d\n" , x + y);
        else
          printf(" = %d\n" , x - y);
    }
    return 0;
}

int ch16(char x[])
{
    int i, l, n, sum;

    l = strlen(x);
    n = 1;
    sum = 0;
    for(i = l - 1; i >= 0; i --)
    {
        if('A' <= x[i] && x[i] <= 'F')
          x[i] -= 55;
        else
          x[i] -= '0';
        sum += x[i] * n;
        n *= 16;
    }
    return sum;
}

void ch2(int sum, char x[])
{
    int i = 0, j;

    while(1)
    {
        x[i ++] = sum % 2 + '0';
        if('9' < x[i - 1])
          x[i - 1] += 7;
        if(sum / 2 < 2)
        {
            if(sum / 2 != 0)
            {
                x[i ++] = sum / 2 + '0';
                if('9' < x[i - 1])
                  x[i - 1] += 7;
            }
            x[i] = '\0';
            break;
        }
        else
          sum /= 2;
    }
    for(j = 13 - i; j > 0; j --)
      printf("0");
    for(j = i - 1; j >= 0; j --)
      printf("%c" , x[j]);
}
