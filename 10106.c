// [ACM] #10106 - Product
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10106     Accepted   0.021   2006-10-28 03:24:08   5081649   0.000

#include<stdio.h>
#include<string.h>
#define LEN 500

void circel(char str[], int l);
void multiply(char str1[] , char str2[], char sum[], int la, int lb);
void output(char str[]);

int main(void)
{
    int i, la, lb;
    char str1[LEN], str2[LEN], sum[LEN];

    while(scanf("%s %s" , str1, str2) == 2)
    {
         la = strlen(str1);
         lb = strlen(str2);
         for(i = 0; i < la; i ++)
            str1[i] = str1[i] - '0';
         for(i = 0; i < lb; i ++)
            str2[i] = str2[i] - '0';
         for(i = la; i < LEN; i ++)
            str1[i] = 0;
         for(i = lb; i < LEN; i ++)
            str2[i] = 0;
         for(i = 0; i < LEN; i ++)
            sum[i] = 0;
         circel(str1,la);
         circel(str2,lb);
         multiply(str1, str2, sum, la, lb);
         output(sum);
    }
    return 0;
}

void circel(char str[], int l)
{
    int i;
    char temp;

    for(i = 0; i < l / 2; i ++)
    {
        temp = str[l - i - 1];
        str[l - i - 1] = str[i];
        str[i] = temp;
    }
}

void multiply(char str1[] , char str2[], char sum[], int la, int lb)
{
    int i = 0, j = 0;

    for(i = 0; i < la; i ++)
    {
        for(j = 0; j < lb; j ++)
        {
            sum[i + j] = sum[i + j] + str1[i] * str2[j];
            if(sum[i + j] > 9)
            {
                sum[i + j + 1] = sum[i + j + 1] + sum[i + j] / 10;
                sum[i + j] = sum[i + j] % 10;
            }
        }
    }
}

void output(char str[])
{
    int i = 0, j = 0;

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
