// [ACM] #145 - Gondwanaland Telecom
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 145       Accepted   0.000   2006-10-28 04:40:44   5081781   0.000

#include<stdio.h>

int main(void)
{
   int i, j, h1, m1, h2, m2, d, e, n;
   char num[22];
   float pay;

   while(1)
   {
      d = 0;
      e = 0;
      n = 0;
      gets(num);
      if(num[0] == '#')
        break;
      h1 = (num[11] - 48) * 10 + num[12] - 48;
      m1 = (num[14] - 48) * 10 + num[15] - 48;
      h2 = (num[17] - 48) * 10 + num[18] - 48;
      m2 = (num[20] - 48) * 10 + num[21] - 48;
      if(h1 == h2 && m1 == m2)
      {
          d = 600;
          e = 240;
          n = 600;
      }
      else if(h1 == h2 && m1 < m2)
      {
          if (h1 >= 8 && h1 < 18 )
            d += m2 - m1;
          else if ( h1 >= 18 && h1 < 22 )
            e += m2 - m1;
          else
            n += m2 - m1;
      }
      else
      {
          if(h1 >= 8 && h1 < 18)
            d += 60 - m1;
          else if (h1 >= 18 && h1 < 22)
            e += 60 - m1;
          else
            n += 60 - m1;
          if (h2 >= 8 && h2 < 18)
            d += m2;
          else if (h2 >= 18 && h2 < 22)
            e += m2;
          else
            n += m2;
          h1 ++;
      }
      if(h2 < h1)
        h2 += 24;
      for(i = h1; i < h2; i ++)
      {
         if(i >= 24)
           j = i - 24;
         else
           j = i;
         if(j >= 8 &&j < 18)
           d += 60;
         else if (j >= 18 && j < 22)
           e += 60;
         else
           n += 60;
      }
      switch(num[0])
      {
         case 'A' :
            pay = d * 0.10 + e * 0.06 + n * 0.02;
            break;
         case 'B' :
            pay = d * 0.25 + e * 0.15 + n * 0.05;
            break;
         case 'C' :
            pay = d * 0.53 + e * 0.33 + n * 0.13;
            break;
         case 'D' :
            pay = d * 0.87 + e * 0.47 + n * 0.17;
            break;
         case 'E' :
            pay = d * 1.44 + e * 0.80 + n * 0.30;
            break;
        }
        printf("  ");
        for(i = 2; i < 10; i ++)
          printf("%c" , num[i]);
        printf("%6d%6d%6d%3c%8.2f\n" , d, e, n, num[0], pay);
    }
    return 0;
}
