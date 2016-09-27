// [ACM] #374 - Big Mod
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 374       Accepted   0.002   2006-11-12 01:51:43   5127935   0.000

#include<stdio.h>

int mod(int b, int p, int m);

int main(void)
{
    int b, p, m;

    while(scanf("%d %d %d" , &b, &p, &m) != EOF)
    {
        if(p == 0 && m == 1)
          printf("0\n");
        else
          printf("%d\n" , mod(b, p, m));
    }
    return 0;
}

int mod(int b, int p, int m)
{
    int t;

    if(p == 0)
      return 1;
    else if(p % 2 != 0)
      return b % m * mod(b, p - 1, m) % m;
    else
    {
        t = mod(b, p / 2, m);
        return t *t % m;
    }
}
