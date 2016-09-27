// [ACM] #495 - Fibonacci Freeze
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 495       Accepted   2.295   2006-10-24 15:54:03   5072045   0.025

#include<stdio.h>
#define LEN 1300

void F(char str1[], char str2[], char sum[], int n);
void add(char str1[] , char str2[], char sum[]);
void output(int n, char str[]);

int si = 2;
char fibo[5000][LEN];

int main(void)
{
   int i, n;
   char str1[LEN], str2[LEN], sum[LEN];
   str1[0] = 0;
   str2[0] = 1;
   sum[0] = 1;
   fibo[0][0] = 1;
   fibo[1][0] = 1;
   for(i = 1; i < LEN; i ++)
   {
      str1[i] = 0;
      str2[i]= 0;
      sum[i]= 0;
   }
   F(str1, str2, sum, 5000);
   while(scanf("%d" , &n) != EOF)
   {
      if(n == 0)
        printf("The Fibonacci number for 0 is 0\n");
      else if(n < 2)
        printf("The Fibonacci number for %d is 1\n" , n);
      else
        output(n,fibo[n-1]);
   }
   return 0;
}

void F(char str1[], char str2[], char sum[], int n)
{
   char temp;
   int i, j;

   for(j = 3; j <= n; j ++)
   {
      for(i = 0; i < LEN; i ++)
      {
         temp = str1[i];
         str1[i] = str2[i];
         str2[i] = temp;
      }
      for(i = 0; i < LEN; i ++)
      {
         temp = str2[i];
         str2[i] = sum[i];
         sum[i] = temp;
      }
      add(str1, str2, sum);
      for(i = 0; i < LEN; i ++)
        fibo[si][i] = sum[i];
      si ++;
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

void output(int n, char str[])
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
   printf("The Fibonacci number for %d is " , n);
   for( ;j >= 0; j --)
     printf("%d" , str[j]);
   printf("\n");
}
