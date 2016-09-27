// [ACM] #477 - Points in Figures: Rectangles and Circles
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 477       Accepted   0.064   2006-10-24 09:34:15   5071085   0.000

#include<stdio.h>

int main(void)
{
   long long int i, k = 0, j = 1, ture = 0, tmp, tmps;
   char t[10];
   float n[10][4], inx,iny;

   while(1)
   {
      scanf(" %c" , &t[k]);
      if(t[k] == '*')
        break;
      scanf("%f %f %f %f" , &n[k][0], &n[k][1], &n[k][2], &n[k][3]);
      k ++;
   }
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
         if(t[i] == 'r')
         {
            if(inx > n[i][0] && inx < n[i][2])
            {
               if(iny < n[i][1] && iny > n[i][3])
               {
                  ture = 1;
                  printf("Point %lld is contained in figure %lld\n" \
                  , j, i + 1);
               }
            }
         }
         else
         {
            if( (inx - n[i][0]) * (inx - n[i][0]) + (iny - n[i][1]) * \
                (iny - n[i][1]) < n[i][2] * n[i][2] )
            {
               ture = 1;
               printf("Point %lld is contained in figure %lld\n" , j, i + 1);

            }
         }
      }
      if(ture == 0)
        printf("Point %lld is not contained in any figure\n" , j);
      j ++;
   }
   return 0;
}
