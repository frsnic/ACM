// [ACM] #499 - What's The Frequency, Kenneth?
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 499       Accepted   0.004   2007-01-24 04:31:43   5283895   0.000

#include<stdio.h>
#include<string.h>
#define LEN 1000

void swap(int arr[][2], int x, int y);
void sort(int arr[][2], int beg, int end, int a);

int main(void)
{
    char s[LEN], st[LEN], tt[LEN], ttt[LEN];
    int i, j, t, l, k, m = 1,n = 0, sn[LEN][2];

    while(gets(s) != NULL)
    {
        l = strlen(s);
        if(l != 0)
        {
            n = 0;
            for(j = l - 1; j >= 0; j --)
            {
                t = 0;
                if(('a' <= s[j] && s[j] <= 'z') ||
                  \('A' <= s[j] && s[j] <= 'Z'))
                {
                    for(i = 0; i < n; i ++)
                    {
                        if(s[j] == sn[i][0])
                        {
                            sn[i][1] ++;
                            t = 1;
                        }
                    }
                    if(t == 0)
                    {
                        sn[n][0] = s[j];
                        sn[n][1] = 1;
                        n ++;
                    }
                }
            }
            k = -1;
            sort(sn, 0, n - 1, 1);
            t = sn[n - 1][1];
            for(i = n - 1; i >= 0; i --)
            {
                if(sn[i][1] != t)
                  break;
                k ++;
            }
            if(k == -1)
              printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ
                     \abcdefghijklmnopqrstuvwxyz 0\n");
            else
            {
                sort(sn, n - k - 1, n - 1, 0);
                for(i = n - k - 1; i < n; i ++)
                  printf("%c" , sn[i][0]);
                printf(" %d\n" , t);
            }
        }
    }
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
