// [ACM] #496 - Simply Subsets
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 496       Accepted   0.000   2007-07-22 13:30:35   5762776   0.000

#include<stdio.h>

int sort(int arr[], int end);
void copare(int a1[], int a2[], int n1, int n2);

int main(void)
{
    int a1[200], a2[200], i, n1 = 0, n2 = 0;
    char c;

    while(scanf("%d%c" , &a1[n1 ++], &c) != EOF)
    {
        n1 = sort(a1, n1 - 1) + 1;
        if(c == '\n')
        {
            while(scanf("%d%c" , &a2[n2 ++], &c) != EOF)
            {
                n2 = sort(a2, n2 - 1) + 1;
                if(c == '\n')
                {
                    compare(a1, a2, n1 - 1, n2 - 1);
                    n1 = 0;
                    n2 = 0;
                    break;
                }
            }
        }
    }
    if(n2 != 0)
    {
        n1 = sort(a1, n1 - 2);
        n2 = sort(a2, n2 - 2);
        compare(a1, a2, n1, n2);
    }

    return 0;
}

int sort(int arr[], int end)
{
    int i, j, p, tmp;

    for(j = 0; j < end; j++)
    {
        if(arr[j] == arr[end])
        {
            end --;
            break;
        }
        else if(arr[end] < arr[j])
        {
            tmp = arr[end];
            p = end;
            while(p > j)
              arr[p] = arr[-- p];
            arr[j] = tmp;
            break;
        }
    }

    return end;
}

void comapre(int a1[], int a2[], int n1, int n2)
{
    int i = 0, j = 0, n = -1;

    for(j = 0; j <= n2; j ++)
    {
        for(i = 0; i <= n1; i ++)
        {
            if(a2[j] == a1 [i])
            {
                n ++;
                break;
            }
        }
    }

    if(n == n2 && n == n1)
      printf("A equals B\n");
    else if(n == -1)
      printf("A and B are disjoint\n");
    else
    {
        if(n != n1 && n != n2)
          printf("I'm confused!\n");
        else if(n1 < n2)
          printf("A is a proper subset of B\n");
        else if(n2 < n1)
          printf("B is a proper subset of A\n");
    }

    return 0;
}
