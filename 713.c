// [ACM] #713 - Adding Reversed Numbers
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 713       Accepted   0.006   2006-10-27 05:04:59   5079149   0.000

#include<stdio.h>
#include<string.h>
#define LEN 300

void circel(char str[]);
void add(char str1[] , char str2[], char sum[]);
void output(char str[]);

int main(void)
{
    int i, n, t, la, lb;
    char str1[LEN], str2[LEN], sum[LEN];

    for(i = 0; i < LEN; i ++)
    {
        str1[i] = 0;
        str2[i] = 0;
        sum[i] = 0;
    }
    scanf("%d" , &n);
    for(t = 0; t < n; t ++)
    {
        scanf("%s %s" , str1, str2);
        la = strlen(str1);
        lb = strlen(str2);
        for(i = la; i < LEN; i ++)
          str1[i] = 0;
        for(i = lb; i < LEN; i ++)
          str2[i] = 0;
        for(i = 0; i < LEN; i ++)
          sum[i] = 0;
        for(i = 0; i < la; i ++)
          str1[i] = str1[i] - '0';
        for(i = 0; i < lb; i ++)
          str2[i] = str2[i] - '0';
        add(str1, str2, sum);
        circel(sum);
        output(sum);
    }
    return 0;
}

void circel(char str[])
{
    int i, l;
    char temp;
    for(i = LEN - 1; i >= 0; i --)
    {
        if(str[i] != 0)
        {
            l = i + 1;
            break;
        }
    }
    for(i = 0; i < l / 2; i ++)
    {
        temp = str[l - i - 1];
        str[l - i - 1] = str[i];
        str[i] = temp;
    }
}

void add(char str1[] , char str2[], char sum[])
{
    int i, j;

    for(i = 0; i < LEN; i ++)
      sum[i] = str1[i] + str2[i];
    for(i = 0; i < LEN; i ++)
    {
        if(sum[i] > 9)
        {
            sum[i+1] = sum[i+1] + sum[i] / 10;
            sum[i] = sum[i] % 10;
        }
    }
}

void output(char str[])
{
    int i, j;

    for(i = LEN - 1; i >= 0; i --)
    {
        if(str[i] != 0)
        {
            j = i;
            break;
        }
    }
    for( ;j >= 0; j --)
      printf("%d" , str[j]);
   printf("\n");
}
