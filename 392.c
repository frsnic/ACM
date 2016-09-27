// [ACM] #392 - Polynomial Showdown
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 392       Accepted   0.290   2008-10-09 11:16:34   6713174   0.000

#include<stdio.h>
#include<math.h>

int main(void)
{
  int n, i, t, ch[9];

  while(scanf("%d %d %d %d %d %d %d %d %d\n" , &ch[0], &ch[1], &ch[2],  \
               &ch[3], &ch[4], &ch[5], &ch[6], &ch[7], &ch[8]) != EOF)
  {
    t = 0;
    for(i = 0; i < 8; i ++)
    {
       if(ch[i] != 0)
       {
         if(t == 1)
         {
           if(ch[i] > 0)
             printf(" + ");
           else
             printf(" - ");
         }
         if(ch[i] < -1 && t == 1)
           printf("%d" , 0 - ch[i]);
         else if(ch[i] != 1 && ch[i] != -1)
           printf("%d" , ch[i]);
         else if(ch[i] < -1 && t == 0)
           printf("%d" , ch[i]);
         else if(ch[i] == -1 && t == 0)
           printf("-");
         printf("x");
         if(i != 7)
           printf("^%d" , 8 - i);
         t = 1;
       }
    }
    if(t == 1 && ch[8] != 0)
    {
      if(ch[i] > 0)
        printf(" + %d" , ch[8]);
      else
        printf(" - %d" , 0 - ch[8]);
    }
    else if(t == 0)
      printf("%d" , ch[8]);
    printf("\n");
  }

  return 0;
}
