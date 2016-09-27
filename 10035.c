// [ACM] #10035 - Primary Arithmetic
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10035     Accepted   0.043   2006-10-18 12:24:26   5053538   0.010

#include<stdio.h>
#include<string.h>

int main(void)
{
     char a[11], b[11], temp;
     int la, lb, i, k, l, t = 0;

     while(1)
     {
         k = 0;
         t = 0;
         for(i = 0; i < 10; i++)
         {
             a[i] = 0;
             b[i] = 0;
         }
         scanf("%s %s" , a, b);
         if(a[0] == '0' && b[0] == '0')
           break;
         la = strlen(a);
         lb = strlen(b);
         l = la > lb ? la : la == lb ? la : lb;
         for(i = 0; i < la / 2; i++)
         {
            temp = a[la - i - 1];
            a[la - i - 1] = a[i];
            a[i] = temp;
         }
         for(i = 0; i < lb / 2; i++)
         {
            temp = b[ lb - 1 -i];
            b[lb - 1 - i] = b[i];
            b[i] = temp;
         }
         for(i = 0; i < l; i ++)
         {
             if(a[i])
               a[i] = a[i] -48;
             if(b[i])
               b[i] = b[i] -48;
             if(a[i] + b[i] + t > 9)
             {
                 k ++;
                 t = 1;
             }
             else
               t = 0;
         }
         if(k == 1)
           printf("1 carry operation.\n");
         else if(k != 0)
           printf("%d carry operations.\n" , k);
         else
           printf("No carry operation.\n");
     }
     return 0;
}
