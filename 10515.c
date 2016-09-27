// [ACM] #10515 - Powers Et Al.
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10515     Accepted   0.283   2006-11-24 13:57:07   5157323   0.000

#include<stdio.h>
#include<string.h>
#define LEN 10000

int main(void)
{
    char st[LEN], sb[LEN];
    int n, i, lt, lb;

    while(scanf("%s %s" , st, sb) != NULL)
    {
        lt = strlen(st);
        lb = strlen(sb);
        if(lt == 1 && st[0] == '0' && lb == 1 && sb[0] == '0')
          break;
        n = 1;
        if(lb == 1 && sb[lb - 1] == '0')
          printf("1\n");
        else if(st[lt - 1] == '0')
          printf("0\n");
        else if(st[lt - 1] == '1')
          printf("1\n");
        else if(st[lt - 1] == '5')
          printf("5\n");
        else if(st[lt - 1] == '6')
          printf("6\n");
        else if(st[lt - 1] == '4' || st[lt - 1] == '9')
        {
            n = (sb[lb - 1] - '0') % 2;
            if(n == 0)
            {
                if(st[lt - 1] == '4')
                  printf("6\n");
                else
                  printf("1\n");
            }
            else
            {
                if(st[lt - 1] == '4')
                  printf("4\n");
                else
                  printf("9\n");
            }
        }
        else
        {
            if(lb >= 2)
              n = (sb[lb - 2] - '0') * 10 + (sb[lb - 1] - '0');
            else
              n = sb[lb - 1] - '0';
            n %= 4;
            if(n == 0)
            {
                switch (st[lt - 1])
                {
                    case '2' :
                      printf("6\n"); break;
                    case '3' :
                      printf("1\n"); break;
                    case '7' :
                      printf("1\n"); break;
                    default :
                      printf("6\n"); break;
                }
            }
            else if(n == 1)
            {
                switch (st[lt - 1])
                {
                    case '2' :
                      printf("2\n"); break;
                    case '3' :
                      printf("3\n"); break;
                    case '7' :
                      printf("7\n"); break;
                    default :
                      printf("8\n"); break;
                }
            }
            else if(n == 2)
            {
                switch (st[lt - 1])
                {
                    case '2' :
                      printf("4\n"); break;
                    case '3' :
                      printf("9\n"); break;
                    case '7' :
                      printf("9\n"); break;
                    default :
                      printf("4\n"); break;
                }
            }
            else
            {
                switch (st[lt - 1])
                {
                    case '2' :
                      printf("8\n"); break;
                    case '3' :
                      printf("7\n"); break;
                    case '7' :
                      printf("3\n"); break;
                    default :
                      printf("2\n"); break;
                }
            }
        }
    }
    return 0;
}
