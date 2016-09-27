// [ACM] #541 - Error Correction
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 541       Accepted   0.010   2008-11-26 13:57:28   6816730   0.000

#include<stdio.h>

int main(void)
{
  int i, j, e, f, num, t, c, r;
  char n[200][200];

  while(scanf("%d\n" , &num) != 0)
  {
    if(num == 0)
      break;
    for(i = 0; i < num; i ++)
      fgets(n[i], 199, stdin);
    f = 0;
    for(i = 0; i < num; i ++)
    {
      t = 0;
      for(j = 0; j < num * 2; j += 2)
        t = t + n[i][j] - '0';
      if(t % 2 == 1)
      {
        f ++;
        if(f > 1)
          break;
        else
          c = i + 1;
      }
    }
    if(f < 2)
    {
      e = 0;
      for(j = 0; j < num * 2; j += 2)
      {
        t = 0;
        for(i = 0; i < num; i ++)
          t = t + n[i][j] - '0';
        if(t % 2 == 1)
        {
          e ++;
          if(e > 1)
            break;
          else
            r = j / 2 + 1;
        }
      }
    }
    if(f == 0 && e == 0)
      printf("OK\n");
    else if(f == 1 && e == 1)
      printf("Change bit (%d,%d)\n" , c, r);
    else
      printf("Corrupt\n");
  }

  return 0;
}
