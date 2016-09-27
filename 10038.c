// [ACM] #10038 - Jolly Jumpers
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10038     Accepted   0.020   2006-11-11 07:59:41   5126287   0.000

#include<stdio.h>

void swap(int arr[], int x, int y);
void sort(int arr[], int beg, int end);

int main(void)
{
    int n, i, j, num[3000], k, t = 1, h, in[2999];

    while(scanf("%d" , &n) == 1)
    {
        t = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d" , &num[i]);
            in[i] = 0;
        }
        k = n - 1;
        if(n == 1)
        {
            if(num[0] == 1 || num[0] == 0 || num[0] == -1)
              t = 1;
            else
              t = 0;
        }
        else
        {
            for(i = 0; i < n - 1; i ++)
            {
                h = num[i] - num[i+1];
                if(h < 0)
                  h = 0 - h;
                  in[i] = h;
            }
            sort(in, 0, n - 2);
            for(i = 0; i < n - 1; i ++)
            {
               if(in[i] != i + 1)
               {
                  t = 0;
                  break;
               }
               else
                 t = 1;
            }
         }
         if(t == 1)
           printf("Jolly\n");
         else
           printf("Not jolly\n");
     }
     return 0;
}

void swap(int arr[], int x, int y)
{
     int t;

     t = arr[x];
     arr[x] = arr[y];
     arr[y] = t;
}

void sort(int arr[], int beg, int end)
{
     int i = beg + 1, j = end, piv = arr[beg];

     if(end > beg)
     {
            while(i < j)
            {
                    if(arr[i] < piv)
                      i ++;
                    else
                      swap(arr, i, j --);
            }
            if(arr[i] > piv)
              i --;
            else
              j ++;
            swap(arr, beg, i);
            sort(arr, beg, i - 1);
            sort(arr, j, end);
     }
}
