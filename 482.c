// [ACM] #482 - Permutation Arrays
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 482       Accepted   0.115   2007-03-03 14:45:43   5375848   0.000

#include<stdio.h>
#include<string.h>

void swap(int num[], int x, int y, char arr[][80]);
void sort(int num[], int beg, int end, char arr[][80]);

int main(void)
{
    int i, j, n, k, index[1000];
    char c, x[10001][80];

    scanf("%d\n" , &n);
    while(n -- > 0)
    {
        i = 0;
        while(scanf("%d" , &index[i ++]) && getchar() != '\n');
        for(k = 0; k < i; k ++)
          scanf("%s " , x[k]);
        sort(index, 0, i - 1, x);
        for(k = 0; k < i; k ++)
          printf("%s\n" , x[k]);
        if(n != 0)
          printf("\n");
    }
    return 0;
}

void swap(int num[], int x, int y, char arr[][80])
{
     int t;
     char tc[80];

     t = num[x];
     num[x] = num[y];
     num[y] = t;
     strcpy(tc, arr[x]);
     strcpy(arr[x], arr[y]);
     strcpy(arr[y], tc);
}

void sort(int num[], int beg, int end, char arr[][80])
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
