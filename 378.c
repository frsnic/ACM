// [ACM] #378 - Intersecting Lines
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 378       Accepted   0.010   2008-12-01 16:48:54   6824751   0.000

#include<stdio.h>

int main(void)
{
  int i, n, x1, x2, x3, x4, y1, y2, y3, y4;
  float m1, m2;

  scanf("%d\n" , &n);
  printf("INTERSECTING LINES OUTPUT\n");
  for(i = 0; i < n; i ++)
  {
    scanf("%d %d %d %d %d %d %d %d\n" , &x1, &y1, &x2, &y2, &x3, &y3, &x4,
                                                                     \&y4);
    if(x1 == x2 || y1 == y2 || x3 == x4 || y3 == y4)
    {
      if(x1 == x2 && x3 == x4)
      {
        if(x2 == x3 || y1 == y2)
          printf("LINE\n");
        else
          printf("NONE\n");
      }
      else if(y1 == y2 && y3 == y4)
      {
        if(y2 == y3)
          printf("LINE\n");
        else
          printf("NONE\n");
      }
      else if(x1 == x2)
      {
        printf("POINT %d.00 " , x1);
        m2 = (y3 - y4) / (x3 - x4);
        printf("%.2f\n" , m2 * (x1 - x3) + y3);
      }
      else if(x3 == x4)
      {
        printf("POINT %d.00 " , x3);
        m2 = (y1 - y2) / (x1 - x2);
        printf("%.2f\n" , m2 * (x3 - x1) + y1);
      }
      else if(y1 == y2)
      {
        m2 = (y3 - y4) / (x3 - x4);
        printf("POINT %.2f " , (y1 - y3) / m2 + x3);
        printf("%d.00\n" , y1);
      }
      else
      {
        m2 = (y1 - y2) / (x1 - x2);
        printf("POINT %.2f " , (y3 - y1) / m2 + x1);
        printf("%d.00\n" , y3);
      }
    }
    else
    {
      m1 = (y1 - y2 + 0.0) / (x1 - x2 + 0.0);
      m2 = (y3 - y4 + 0.0) / (x3 - x4 + 0.0);
      if(m1 == m2)
      {
        m1 = y1 + m1 * (x3 - x1 + 0.0);
        m2 = y3;
        if(m1 == m2)
          printf("LINE\n");
        else
          printf("NONE\n");
      }
      else
      {
        m2 = (y4 - y2 - m2 * x4 + m1 * x2) / (m1 - m2);
        printf("POINT %.2f " , m2);
        printf("%.2f\n" , m1 * (m2 - x1) + y1);
      }
    }
  }
  printf("END OF OUTPUT\n");

  return 0;
}
