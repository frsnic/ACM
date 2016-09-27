// [ACM] #573 - The Snail
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 573       Accepted   0.000   2008-10-09 06:20:54   6712789   0.000

#include<stdio.h>

int main(void)
{
  int t;
  float h, u, d, f, a;

  while(scanf("%f %f %f %f\n" , &h, &u, &d, &f) != EOF)
  {
    t = 1;
    a = 0.0;
    f = u * (f / 100.0);
    if(h == 0.0)
      break;
    while(1)
    {
      a += u;
      if(a > h)
      {
        printf("success on day %d\n" , t);
        break;
      }
      a -= d;
      u -= f;
      if(u <= 0.0)
        u = 0.0;
      if(a < 0)
      {
        printf("failure on day %d\n" , t);
        break;
      }
      t ++;
    }
  }

  return 0;
}
