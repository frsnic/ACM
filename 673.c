// [ACM] #673 - Parentheses Balance
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 673       Accepted   0.111   2006-11-29 05:30:42   5168121   0.027

#include<stdio.h>
#include<string.h>

int main(void)
{
    char c, x[128], t[64];
    int i, j, n, l, k;

    scanf("%d\n" , &n);
    for(j = 0; j < n; j ++)
    {
        k = 0;
        gets(x);
        l = strlen(x);
        for(i = 0; i < l; i ++)
        {
            if(x[i] == ')' && t[k - 1] == '(')
              k --;
            else if(x[i] == ']' && t[k - 1] == '[')
              k --;
            else
              t[k ++] = x[i];
        }
        if(k == 0)
          printf("Yes\n");
        else
          printf("No\n");
    }
    return 0;
}
