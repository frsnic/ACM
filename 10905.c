// [ACM] #10905 - Children's Game
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10905     Accepted   1.207   2006-12-10 00:04:01   5189200   2.453

#include<stdio.h>
#include<string.h>
#define LEN 1000

void swap(int num[], int x, int y, char arr[][LEN]);
void sort(int num[], int beg, int end, char arr[][LEN]);

int main(void)
{
    int i, j, t, n, nx, ny, num[50];
    char x[50][LEN], t1[LEN], t2[LEN];

    while(scanf("%d" , &n) == 1)
    {
        if(n == 0)
          break;
        for(i = 0; i < n; i ++)
        {
            num[i] = 0;
            scanf("%s" , &x[i][0]);
        }
        for(i = 0; i < n; i ++)
        {
            nx = strlen(x[i]);
            for(j = i + 1; j < n; j ++)
            {
                ny = strlen(x[j]);
                strncpy(t1, x[i], nx + 1);
                strncat(t1, x[j], ny + 1);
                strncpy(t2, x[j], ny + 1);
                strncat(t2, x[i], ny + 1);
                for(t = 0; t < nx + ny - 1; t ++)
                {
                    if(t1[t] > t2[t])
                    {
                        num[i] ++;
                        break;
                    }
                    else if(t1[t] < t2[t])
                    {
                        num[j] ++;
                        break;
                    }
                }
            }
        }
        sort(num, 0, n - 1, x);
        for(i = n - 1; i >= 0; i --)
          printf("%s" , x[i]);
        printf("\n");
        t ++;
    }
    return 0;
}

void swap(int num[], int x, int y, char arr[][LEN])
{
     int t, lx, ly;
     char tc[LEN];

     t = num[x];
     num[x] = num[y];
     num[y] = t;
     lx = strlen(arr[x]);
     ly = strlen(arr[y]);
     strncpy(tc, arr[x], lx + 1);
     strncpy(arr[x], arr[y], ly + 1);
     strncpy(arr[y], tc, lx + 1);
}

void sort(int num[], int beg, int end, char arr[][LEN])
{
    int i = beg + 1, j = end, piv = num[beg];

    if(end > beg)
    {
        while(i < j)
        {
            if(num[i] < piv)
              i ++;
            else
              swap(num, i, j --, arr);
        }
        if(num[i] > piv)
          i --;
        else
          j ++;
        swap(num, beg, i, arr);
        sort(num, beg, i - 1, arr);
        sort(num, j, end, arr);
    }
}
