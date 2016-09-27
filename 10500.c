// [ACM] #10500 - Robot maps
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10500     Accepted   0.000   2007-04-21 01:31:23   5520516   0.000

#include<stdio.h>

int check(int x, int y);

int n, m;
char map[10][10], robot[10][10];

int main(void)
{
    int i = 0, j, x, y, step, next;

    while(scanf("%d %d\n" , &m, &n) && n + m != 0)
    {
        printf("\n");
        step = 0;
        scanf("%d %d\n" , &y, &x);
        for(i = 0; i < m; i ++)
        {
            for(j = 0; j < n; j ++)
              robot[i][j] = '?';
        }
        for(i = 0; i < m; i ++)
        {
            for(j = 0; j < n; j ++)
              scanf("%c " , &map[i][j]);
        }
        robot[y - 1][x - 1] = '0';
        map[y - 1][x - 1] = 'G';
        while(1)
        {
            next = check(x, y);
            if(next == 0)
              break;
            else
              map[y - 1][x - 1] = 'G';
            if(next == 1)
              y --;
            else if(next == 2)
              x ++;
            else if(next == 3)
              y ++;
            else if(next == 4)
              x --;
            step ++;
        }
        for(i = 0; i < m; i ++)
        {
            printf("|");
            for(j = 0; j < n; j ++)
              printf("---|");
            printf("\n|");
            for(j = 0; j < n; j ++)
              printf(" %c |" , robot[i][j]);
            printf("\n");
        }
        for(j = 0; j < n; j ++)
          printf("|---");
        printf("|\n\n");
        printf("NUMBER OF MOVEMENTS: %d\n" , step);
    }

    return 0;
}

int check(int x, int y)
{
    int next = 0;

    if(y != 1)
    {
        if(map[y - 2][x - 1] != 'G')
        {
            robot[y - 2][x - 1] = map[y - 2][x - 1];
            if(robot[y - 2][x - 1] != 'X' && next == 0)
              next = 1;
        }
    }
    if(x != n)
    {
        if(map[y - 1][x] != 'G')
        {
            robot[y - 1][x] = map[y - 1][x];
            if(robot[y - 1][x] != 'X' && next == 0)
              next = 2;
        }
    }
    if(y != m)
    {
        if(map[y][x - 1] != 'G')
        {
            robot[y][x - 1] = map[y][x - 1];
            if(robot[y][x - 1] != 'X' && next == 0)
              next = 3;
        }
    }
    if(x != 1)
    {
        if(map[y - 1][x - 2] != 'G')
        {
            robot[y - 1][x - 2] = map[y - 1][x - 2];
            if(robot[y - 1][x - 2] != 'X' && next == 0)
              next = 4;
        }
    }

    return next;
}
