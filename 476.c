// [ACM] #476 - Points in Figures: Rectangles
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 476       Accepted   0.062   2006-10-23 13:02:20   5068648   0.000

#include<stdio.h>

int main(void)
{
   long int i, k = 0, j , ture = 0, s, tmp, tmps;
   char t[10];
   float n[10][4], inx, iny;

   while(1)
   {
      scanf(" %c" , &t[k]);
      if(t[k] == '*')
        break;
      scanf("%f %f %f %f" , &n[k][0], &n[k][1], &n[k][2], &n[k][3]);
      k ++;
   }
   j = 0;
   while(1)
   {
      scanf("%f %f" , &inx, &iny);
      tmp = inx * 10;
      tmps = iny * 10;
      if(tmp == 99999 && tmps == 99999)
        break;
      ture = 0;
      for(i = 0; i < k; i ++)
      {
         if(inx > n[i][0] && inx < n[i][2])
         {
            if(iny < n[i][1] && iny > n[i][3])
            {
               ture = 1;
               printf("Point %ld is contained in figure %ld\n" , j+1, i+1);
            }
         }
      }
      if(ture == 0)
        printf("Point %ld is not contained in any figure\n" , j+1);
      j ++;
   }
   return 0;
}
