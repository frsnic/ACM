// [ACM] #101 - The Blocks Problem
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 101       Accepted   0.014   2007-04-29 09:57:25   554341    0.000

#include<stdio.h>
#include<string.h>

void move(int a, int number[][24], int add[], int now[][2]);
void on(int a, int b, int number[][24], int add[], int now[][2]);

int main(void)
{
    int n, i, j, a, b, number[24][24], add[24], now[24][2];
    char str1[5], str2[5];

    while(scanf("%d\n" , &n) == 1)
    {
        for(i = 0; i < n; i ++)
        {
            number[i][0] = i;
            add[i] = 0;
            now[i][0] = i;
            now[i][1] = 0;
        }
        while(scanf("%s" , str1))
        {
            if(str1[0] == 'q')
            {
                for(i = 0; i < n; i ++)
                {
                    printf("%d:" , i);
                    for(j = 0; j <= add[i]; j ++)
                      printf(" %d" , number[i][j]);
                    printf("\n");
                }
                break;
            }
            else
            {
                scanf(" %d %s %d\n" , &a, str2, &b);
                if(now[a][0] != now[b][0])
                {
                    if(str1[0] == 'm' && str2[1] == 'n')
                    {
                        move(a, number, add, now);
                        move(b, number, add, now);
                        on(a, b, number, add, now);
                    }
                    else if(str1[0] == 'm' && str2[1] == 'v')
                    {
                        move(a, number, add, now);
                        on(a, b, number, add, now);
                    }
                    else if(str1[0] == 'p' && str2[1] == 'n')
                    {
                        move(b, number, add, now);
                        on(a, b, number, add, now);
                    }
                    else
                      on(a, b, number, add, now);
                  }
              }
        }
    }
    return 0;
}

void move(int a, int number[][24], int add[], int now[][2])
{
    int i, j, t, d;

    i = now[a][0];
    for(j = add[i]; j > now[a][1]; j --)
    {
        t = number[i][j];
        add[t] ++;
        d = add[t];
        number[t][d] = t;
        add[i] --;
        now[t][0] = t;
        now[t][1] = d;
    }
}

void on(int a, int b, int number[][24], int add[], int now[][2])
{
    int i, j, t, d, n = 0, p;

    i = now[a][0];
    for(j = now[a][1]; j <= add[i]; j ++)
    {
        p = now[b][0];
        add[p] ++;
        d = add[p];
        t = number[i][j];
        number[p][d] = t;
        now[t][0] = p;
        now[t][1] = d;
        n ++;
    }
    add[i] -= n;
}
