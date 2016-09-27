// [ACM] #10008 - What`s Cryptanalysis?
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10008     Accepted   0.000   2006-12-09 22:57:46   5189123   0.000

#include<stdio.h>
#define LEN 1000

void swap(int arr[][2], int x, int y);
void sort(int arr[][2], int beg, int end, int a);

int main(void)
{
    int n, p, i, j, k = 0, c[26][2];
    char x[LEN];

    scanf("%d\n" , &n);
    for(i = 0; i < n; i ++)
    {
        j = 0;
        gets(x);
        while(x[j] != '\0')
        {
            if('a' <= x[j] && x[j] <= 'z')
              x[j] -= 32;
            if('A' <= x[j] && x[j] <= 'Z')
            {
                for(p = 0; p <= k; p ++)
                {
                    if(x[j] == 0 - c[p][0])
                    {
                        c[p][1] ++;
                        break;
                    }
                    if(p == k)
                    {
                        c[k][0] = 0 - x[j];
                        c[k ++][1] = 1;
                        break;
                    }
                }
            }
            j ++;
        }
    }
    sort(c, 0, k - 1, 1);
    for(i = k - 1; i > 0; i --)
    {
        p = i;
        while(c[i][1] == c[-- p][1])
        {
            if(c[p][1] != c[p - 1][1])
              sort(c, p, i, 0);
        }
        i = p + 1;
    }
    for(i = k - 1; i >= 0; i --)
      printf("%c %d\n" , 0 - c[i][0], c[i][1]);
    return 0;
}

void swap(int arr[][2], int x, int y)
{
     int t, tn;

     t = arr[x][0];
     tn = arr[x][1];
     arr[x][0] = arr[y][0];
     arr[x][1] = arr[y][1];
     arr[y][0] = t;
     arr[y][1] = tn;
}

void sort(int arr[][2], int beg, int end, int a)
{
     int i = beg + 1, j = end, piv = arr[beg][a];

     if(end > beg)
     {
         while(i < j)
         {
             if(arr[i][a] < piv)
               i ++;
             else
               swap(arr, i, j --);
         }
         if(arr[i][a] > piv)
           i --;
         else
           j ++;
         swap(arr, beg, i);
         sort(arr, beg, i - 1, a);
         sort(arr, j, end, a);
     }
}
