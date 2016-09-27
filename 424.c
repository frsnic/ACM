// [ACM] #414 - Integer Inquiry
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 424       Accepted   0.010   2008-10-09 04:52:44   6712637   0.0000

#include<stdio.h>
#include<string.h>

int main(void)
{
  int i, t, l = 0;
  char str[201], ans[201];

  for(i = 0; i <= 200; i ++)
    ans[i] = 0;
  while(fgets(str, 199, stdin) != NULL)
  {
    l = strlen(str);
    if(str[l - 1] == '\n')
      l -= 1;
    if(l == 1 && str[0] == '0')
      break;
    for(i = 0; i < l / 2; i ++)
    {
      t = str[l - 1 - i] - 48;
      str[l - 1 - i] = str[i] - 48;
      str[i] = t;
    }
    if(l % 2 == 1)
      str[l / 2] -= 48;
    for(i = 0; i < l; i ++)
    {
      ans[i] += str[i];
      if(ans[i] > 9)
      {
        ans[i + 1] += 1;
        ans[i] -= 10;
      }
    }
  }
  for(l = 200; l >= 0 ;l --)
  {
    if(ans[l] != 0)
      break;
  }
  if(l == -1)
    l = 0;
  for(i = l; i >= 0 ;i --)
    printf("%d" , ans[i]);
  printf("\n");

  return 0;
}
