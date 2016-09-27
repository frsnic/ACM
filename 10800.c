// [ACM] #10800 - Not That Kind of Graph
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10800     Accepted   0.002   2007-04-21 12:46:38   5521524   0.000

#include<stdio.h>
#include<string.h>

int main(void)
{
    int n, i, j, max, min, l, h, t;
    char str[51], graph[100][51];

    scanf("%d\n" , &n);

    for(t = 1; t <= n; t ++)
    {
        h = 0;
        max = 0;
        min = 0;
        gets(str);
        l = strlen(str);
        for(i = 0; i < 100; i ++)
        {
            for(j = 0; j < 51; j ++)
              graph[i][j] = ' ';
            graph[i][l] = '\0';
        }
        for(i = 0; i < l; i ++)
        {
            if(str[i] == 'R')
            {
                if(h < 0)
                  graph[49 - h][i] = '/';
                else
                  graph[h][i] = '/';
                h ++;
                if(h > max)
                  max = h;
            }
            else if(str[i] == 'F')
            {
                h --;
                if(h < 0)
                  graph[49 - h][i] = '\\';
                else
                  graph[h][i] = '\\';
                if(h < min)
                  min = h;
            }
            else
            {
                if(h < 0)
                  graph[49 - h][i] = '_';
                else
                  graph[h][i] = '_';
            }
        }
        printf("Case #%d:\n" , t);
        for(i = l - 1; i >= 0; i --)
        {
            if(graph[max][i] != ' ')
            {
                graph[max][i + 1] = '\0';
                printf("| %s\n" , graph[max]);
                break;
            }
        }
        for(i = max - 1; i >= 0; i --)
        {
            for(j = l - 1; j >= 0; j --)
            {
                if(graph[i][j] != ' ')
                {
                    graph[i][j + 1] = '\0';
                    printf("| %s\n" , graph[i]);
                    break;
                }
            }
        }
        for(i = -1; i > min; i --)
        {
            for(j = l - 1; j >= 0; j --)
            {
                if(graph[49 - i][j] != ' ')
                {
                    graph[49 - i][j + 1] = '\0';
                    printf("| %s\n" , graph[49 - i]);
                    break;
                }
            }
        }
        for(i = l - 1; i >= 0; i --)
        {
            if(graph[49 - min][i] != ' ' && min < 0)
            {
                graph[49 - min][i + 1] = '\0';
                printf("| %s\n" , graph[49 - min]);
                break;
            }
        }
        printf("+");
        for(i = 0; i <= l + 1; i ++)
          printf("-");
        printf("\n\n");
    }
    return 0;
}
