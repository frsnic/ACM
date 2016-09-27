// [ACM] #10018 - Reverse and Add
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10018     Accepted   0.010   2008-10-08 15:21:16   6711006   0.000

#include<stdio.h>
#include<string.h>

int main(void)
{
  int i, l, n, t, tim;
  char ch[100];

  scanf("%d\n" , &n);
  while(n -- > 0)
  {
    fgets(ch, 20, stdin);
    l = strlen(ch);
    if(ch[l - 1] == '\n')
      l -= 1;
    for(i = 0; i < l; i ++)
      ch[i] -= 48;
    for(i = l; i < 100; i ++)
      ch[i] = 0;
    for(i = 0; i < l / 2; i ++)
    {
      t = ch[i];
      ch[i] = ch[l - i - 1];
      ch[l - i - 1] = t;
    }
    tim = 1;
    while(1)
    {
      for(i = 0; i < l / 2; i ++)
      {
        ch[i] += ch[l - i - 1];
        ch[l - i - 1] = ch[i];
      }
      if(l % 2 == 1)
        ch[(l - 1) / 2] *= 2;
      for(i = 0; i < l; i ++)
      {
        if(ch[i] >= 10)
        {
          ch[i + 1] += 1;
          ch[i] -= 10;
          if(i == l - 1)
          {
            l += 1;
            break;
          }
        }
      }
      t = 1;
      for(i = 0; i < l / 2; i ++)
      {
        if(ch[i] == ch[l - i - 1])
          t = 1;
        else
        {
          t = 0;
          break;
        }
      }
      if(tim ++ == 1000 || t == 1)
        break;
    }
    printf("%d " , tim - 1);
    for(i = 0; i < l; i ++)
      printf("%d" , ch[i]);
    printf("\n");
  }

  return 0;
}
